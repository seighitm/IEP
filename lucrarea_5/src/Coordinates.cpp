#include "../inc/Coordinates.hpp"

Coordinates::Coordinates() : _x(0), _y(0)
{
}

Coordinates::~Coordinates()
= default;


Coordinates::Coordinates(double x, double y): _x(x), _y(y)
{
}

Coordinates::Coordinates(const Coordinates& c) : _x(c._x), _y(c._y)
{
}

std::ostream& operator<<(std::ostream& os, const Coordinates& c)
{
	os << "{ X: " << c._x << "; Y: " << c._y << " }";
	return os;
}

Coordinates& Coordinates::operator=(const Coordinates& c)
{
	if (this == &c)
		return *this;
	_x = c._x;
	_y = c._y;
	return *this;
}

double Coordinates::get_x() const
{
	return this->_x;
}

double Coordinates::get_y() const
{
	return this->_y;
}

void Coordinates::set_x(double x)
{
	this->_x = x;
}

void Coordinates::set_y(double y)
{
	this->_y = y;
}
