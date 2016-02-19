#include <errno.h>
#include "socket/clientsocket.h"
#include "header/deferror.h"

#include <iostream>

ClientSocket::ClientSocket( int _nSocket, ISocketManager* _pSocketManager )
	:MySocket( _nSocket, _pSocketManager )
{

}

ClientSocket::~ClientSocket()
{

}

