#ifndef ACCEPTTCPCONNECTIONCALLBACKPROVIDERBASE_H_
#define ACCEPTTCPCONNECTIONCALLBACKPROVIDERBASE_H_
#ifdef USE_ETHERNET
#include "lwip/tcp.h"


namespace HastlayerOperatingSystem
{

class AcceptTcpConnectionCallbackProviderBase
{
public:

	/**
	 * Abstract callback for accepting TCP connection request.
	 */
	virtual tcp_accept_fn GetCallback() = 0;
};

} /* namespace HastlayerOperatingSystem */
#endif
#endif /* ACCEPTTCPCONNECTIONCALLBACKPROVIDERBASE_H_ */
