#pragma once
#include <mutex>
#include <iostream>

class Phone
{
private:
	std::mutex* _mutex;

public:
    Phone(std::mutex*, int id);
    ~Phone();
};
