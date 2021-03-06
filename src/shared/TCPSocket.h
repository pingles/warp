#ifndef TCP_SOCKET_H
#define TCP_SOCKET_H

/*
 *  Socket.h
 *  warp
 *
 *  Created by Nicholas Kostelnik on 02/10/2010.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "ISocket.hpp"

class TCPSocket  : public ISocket
{
	
public:
	
  TCPSocket(unsigned int port)
    : port_(port) { };
  
  bool connect_to(const std::string& host, unsigned int port);
  
  void terminate();
  
  received_data* receive();
  
  bool send(const char* data, unsigned int size);
  
  void listen_on();
  void dispose(received_data* data);
  
private:
  
  unsigned int port_;
  int socket_;
  int max_socket_;
  int listen_sock_;
  fd_set read_sockets_;
	
};

#endif
