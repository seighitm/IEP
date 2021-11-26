#pragma once
#include <string>
#include <iostream>

class Figure
{
protected:
	std::string _name;

public:
	Figure(); // default constructor
	virtual ~Figure(); // destructor
	explicit Figure(std::string); // constructor
	virtual double get_square() = 0;
	virtual double get_perimeter() = 0;
	Figure& operator=(const Figure&); // copy assignment
	std::string get_name() const; // getter
	void set_name(std::string); // setter
};
