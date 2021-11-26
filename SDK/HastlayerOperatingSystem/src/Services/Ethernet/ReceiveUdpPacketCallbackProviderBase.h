#ifndef RECEIVEUDPPACKETCALLBACKPROVIDERBASE_H_
#define RECEIVEUDPPACKETCALLBACKPROVIDERBASE_H_
#ifdef USE_ETHERNET
#include "lwip/udp.h"


namespace HastlayerOperatingSystem
{

class ReceiveUdpPacketCallbackProviderBase
{
public:

	/**
	 * Abstract callback for receiving UDP packets.
	 */
	virtual udp_recv_fn GetCallback() = 0;
};

} /* namespace HastlayerOperatingSystem */
#endif
#endif /* RECEIVEUDPPACKETCALLBACKPROVIDERBASE_H_ */
