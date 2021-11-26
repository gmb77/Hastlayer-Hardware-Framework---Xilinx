#ifndef ECHOSERVERUDPRECEIVECALLBACKPROVIDER_H_
#define ECHOSERVERUDPRECEIVECALLBACKPROVIDER_H_
#ifdef USE_ETHERNET
#include "ReceiveUdpPacketCallbackProviderBase.h"


namespace HastlayerOperatingSystem
{

class EchoServerUdpReceiveCallbackProvider : public ReceiveUdpPacketCallbackProviderBase
{
public:

	/**
	 * Callback for accepting TCP connection requests to echo back the packets.
	 */
	udp_recv_fn GetCallback();
};

} /* namespace HastlayerOperatingSystem */
#endif
#endif /* ECHOSERVERUDPRECEIVECALLBACKPROVIDER_H_ */
