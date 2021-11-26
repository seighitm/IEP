#pragma once
#define _USE_MATH_DEFINES
#include "Figure.hpp"
#include "Coordinates.hpp"
#include <math.h>

class Circle final : public Figure
{
private:
	double _radius;
	Coordinates* _coordinates;

public:
	Circle(); // default constructor
	~Circle() override; // destructor
	Circle(double, std::string, Coordinates*); // constructor
	Circle& operator=(const Circle&); // copy assignment
	Circle(const Circle&) = delete; // disable copy constructor
	friend std::ostream& operator<<(std::ostream&, const Circle&);
	double get_square() override;
	double get_perimeter() override;
	void set_radius(double); // setter
	double get_radius() const; // getter
	void set_coordinates(Coordinates*); // setter
	Coordinates* get_coordinates() const; // getter
};
