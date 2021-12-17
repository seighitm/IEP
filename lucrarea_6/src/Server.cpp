#include "../inc/Server.hpp"

Server::Server(std::string ip) : _ip(ip)
{
}

Server::~Server()
{
	std::cout << " > Server shut down!" << std::endl;
}

std::string Server::get_ip()
{
	return _ip;
}

void Server::set_ip(const std::string ip)
{
	_ip = ip;
}

std::ostream& operator<<(std::ostream& out, Server& s)
{
	out << " { " + s.get_ip() + " } " << std::endl;
	return out;
}
