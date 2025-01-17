#include "RegisterManager.h"

#ifdef MICROBLAZE
#define HAST_IP_BASEADDR XPAR_HAST_IP_0_S00_AXI_BASEADDR;
#else
#define HAST_IP_BASEADDR XPAR_HAST_IP_V1_0_0_BASEADDR;
#endif

namespace HastlayerOperatingSystem
{

volatile unsigned long *registerBaseAddressPointer = (volatile unsigned long *)HAST_IP_BASEADDR;

void RegisterManager::RunAndWait()
{
	RegisterManager::SetStartSignal(true);

	while (!RegisterManager::GetFinishedSignal());

	RegisterManager::SetStartSignal(false);
}

void RegisterManager::SetStartSignal(bool isStarted)
{
	*(registerBaseAddressPointer + 10) = isStarted ? 0x0001 : 0;
}

bool RegisterManager::GetFinishedSignal()
{
	return *(registerBaseAddressPointer + 9) == 0x0001;
}

void RegisterManager::SetMemberId(int memberId)
{
	// Setting the member ID in the slave register.
	*(registerBaseAddressPointer + 8) = memberId;
}

long* RegisterManager::GetExecutionTimeAddress()
{
	return (long*)(registerBaseAddressPointer + 4);
}

long* RegisterManager::GetDeviceDnaAddress()
{
	return (long*)(registerBaseAddressPointer + 2);
}

} /* namespace HastlayerOperatingSystem */
