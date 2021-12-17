#include "../inc/Phone.hpp"
#include <mutex>

Phone::Phone(std::mutex* m, int id): _mutex(m)
{
	this->_mutex->lock();
	std::cout << " >> The [" << id << "] phone is busy." << std::endl;
}

Phone::~Phone()
{
	this->_mutex->unlock();
	std::cout << " >> The phone is not busy." << std::endl;
}