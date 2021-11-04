#pragma once
#define _USE_MATH_DEFINES
#include "Figure.hpp"
#include <math.h>

class Circle final : public Figure
{
private:
	double _radius;

public:
	Circle(); // default constructor
	~Circle() override; // destructor
	Circle(double, std::string); // constructor
	Circle(const Circle&) = delete; // disable copy constructor
	Circle& operator=(const Circle&) = delete; // disable copy assignment
	friend std::ostream& operator<<(std::ostream&, const Circle&);
	double get_square() override;
	double get_perimeter() override;
	void set_radius(double); // setter
	double get_radius() const; // getter
};
