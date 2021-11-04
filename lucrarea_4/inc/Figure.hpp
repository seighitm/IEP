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
	explicit Figure(std::string c); // constructor
	Figure& operator =(const Figure& f);
	virtual double get_square() = 0;
	virtual double get_perimeter() = 0;
	std::string get_name() const; // getter
	void set_name(std::string n); // setter
};