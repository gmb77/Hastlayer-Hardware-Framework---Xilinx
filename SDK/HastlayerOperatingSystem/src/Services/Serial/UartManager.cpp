#include "UartManager.h"

namespace HastlayerOperatingSystem
{

void UartManager::WaitForUartInput()
{
#ifdef MICROBLAZE
	while (XUartLite_IsReceiveEmpty(XPAR_AXI_UARTLITE_0_BASEADDR))
		;
#else
	while(!XUartPs_IsReceiveData(XPAR_XUARTPS_0_BASEADDR))
		;
#endif
}

void UartManager::WaitForUartInput(byte byteToWaitFor)
{
	WaitForUartInput();
	if (ReceiveByte() == byteToWaitFor)
	{
		return;
	}

	WaitForUartInput(byteToWaitFor);
}

void UartManager::WaitForTransmitterReady()
{
#ifdef MICROBLAZE
	while (XUartLite_IsTransmitFull(XPAR_AXI_UARTLITE_0_BASEADDR))
		;
#else
	while(!XUartPs_IsTransmitFull(XPAR_XUARTPS_0_BASEADDR))
		;
#endif
}

byte UartManager::ReceiveByte()
{
#ifdef MICROBLAZE
	return XUartLite_RecvByte(XPAR_AXI_UARTLITE_0_BASEADDR);
#else
	return XUartPs_RecvByte(XPAR_XUARTPS_0_BASEADDR);
#endif
}

int UartManager::ReceiveInt()
{
	byte inputBuffer[4];

	inputBuffer[0] = ReceiveByte();
	inputBuffer[1] = ReceiveByte();
	inputBuffer[2] = ReceiveByte();
	inputBuffer[3] = ReceiveByte();

	int result = 0;

	result = (result << 8) + inputBuffer[3];
	result = (result << 8) + inputBuffer[2];
	result = (result << 8) + inputBuffer[1];
	result = (result << 8) + inputBuffer[0];

	return result;
}

void UartManager::SendByte(byte byteToSend)
{
#ifdef MICROBLAZE
	XUartLite_SendByte(XPAR_AXI_UARTLITE_0_BASEADDR, byteToSend);
#else
	XUartPs_SendByte(XPAR_XUARTPS_0_BASEADDR, byteToSend);
#endif
}

void UartManager::SendInt(int intToSend)
{
	SendByte(intToSend);
	SendByte(intToSend >> 8);
	SendByte(intToSend >> 16);
	SendByte(intToSend >> 24);
}

} /* namespace HastlayerOperatingSystem */
