// 
// Homo Deus
// 1/21/21
// 
// Homo Deus C++ Library
// ConnectingSocket.cpp
// 
// This class implements a call to the connect() function of sockets as a definition to the connect_to_network virtual funtion from SimpleSocket.
// 
// Adam Rahmat Ilahi
// 



#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
  class ConnectingSocket: public SimpleSocket
  {
  public:
    // Contructor
    ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
    // Virtual function from parent 
    int connect_to_network(int sock, struct sockaddr_in address);
  };
}

#endif /* ConnectingSocket_hpp */