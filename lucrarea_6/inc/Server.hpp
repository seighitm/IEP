#pragma once
#include <iostream>

class Server
{
private:
	std::string _ip;

public:
	Server(std::string);
	~Server();
	std::string get_ip();
	void set_ip(const std::string);
	friend std::ostream& operator<<(std::ostream&, Server&);
	Server& operator=(const Server&) = delete;
};
