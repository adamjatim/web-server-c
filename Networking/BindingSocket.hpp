// 
// Homo Deus
// 1/21/21
// 
// Homo Deus C++ Library
// BindingSocket.hpp
// 
// This class implements a call to the bind() function of sockets as a definition of the connect_to_network virtual function from SimpleSocket
// Adam Rahmat Ilahi
// 



#ifndef   Socket_hpp
#define BindingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
  class BindingSocket: public SimpleSocket
  {
    public:
      // Contructor
      BindingSocket(int domain, int service, int protocol, int port, u_long interface);
      // Virtual  function from parent
      int connect_to_network(int sock, struct sockaddr_in address);
  };
  
}

#endif /* BindingSocket_hpp */