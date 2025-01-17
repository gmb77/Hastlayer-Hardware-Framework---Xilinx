#include "DefaultNetworkInterfaceAccessor.h"
#ifdef USE_ETHERNET
namespace HastlayerOperatingSystem
{

static netif* _defaultNetworkInterface;


netif* DefaultNetworkInterfaceAccessor::GetDefaultNetworkInterface()
{
	return _defaultNetworkInterface;
}

void DefaultNetworkInterfaceAccessor::SetDefaultNetworkInterface(netif* networkInterface)
{
	_defaultNetworkInterface = networkInterface;
}

} /* namespace HastlayerOperatingSystem */
#endif
