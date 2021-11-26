#ifndef WHOISAVAILABLEUDPRECEIVECALLBACKPROVIDER_H_
#define WHOISAVAILABLEUDPRECEIVECALLBACKPROVIDER_H_
#ifdef USE_ETHERNET
#include "DefaultNetworkInterfaceAccessor.h"
#include "ReceiveUdpPacketCallbackProviderBase.h"
#include "../../Constants/CommandTypes.h"
#include "../../Constants/EthernetCommunicationConstants.h"
#include "InputOutputMemoryTcpAcceptCallbackProvider.h"
#include "../../TypeDefinitions.h"
#include <string.h>


namespace HastlayerOperatingSystem
{

class WhoIsAvailableUdpReceiveCallbackProvider : public ReceiveUdpPacketCallbackProviderBase
{
public:

	/**
	 * Callback for accepting TCP connection requests to echo back the packets.
	 */
	udp_recv_fn GetCallback();
};

} /* namespace HastlayerOperatingSystem */
#endif
#endif /* WHOISAVAILABLEUDPRECEIVECALLBACKPROVIDER_H_ */
