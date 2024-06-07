// 
// Homo Deus
// 1/21/21
// 
// Homo Deus C++ Library
// SimpleSocket.cpp
// 
// Adam Rahmat Ilahi
// 



#include "SimpleSocket.hpp"

// default constructor

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
  // Define address structure
  address.sin_family = domain;
  address.sin_port = htons(port);
  address.sin_addr.s_addr = htonl(interface);
  // Establish socket
  sock = socket(domain, service, protocol);
  test_connection(sock);
}

// test connection virtual function

void HDE::SimpleSocket::test_connection(int item_to_test)
{
  // confirmst that the socket or connection has been properly established
  if (item_to_test < 0)
  {
    perror("Failed to Connect...");
    exit(EXIT_FAILURE);
  }
}

// Getter functions

struct sockaddr_in HDE::SimpleSocket::get_address()
{
  return address;
};

int HDE::SimpleSocket::get_sock()
{
  return sock;
}

int HDE::SimpleSocket::get_connection()
{
  return connection;
}

void HDE::SimpleSocket::set_connection(int con)
{
  connection = con;
}