#include "../inc/Circle.hpp"

Circle::Circle() : _radius(1)
{
	std::cout << "CIRCLE:\t\tDefault constructor of <" << this->get_name() << "> called!" << std::endl;
}

Circle::~Circle()
{
	std::cout << "CIRCLE:\t\tDestructor <" << this->get_name() << "> called!" << std::endl;
}

Circle::Circle(const double r, const std::string c) : Figure(c), _radius(r)
{
	std::cout << "CIRCLE:\t\tConstructor of <" << this->get_name() << "> called!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Circle& c)
{
	os << "{ name: " << c.get_name() << "; radius: " << c.get_radius() << " }";
	return os;
}

double Circle::get_square()
{
	return _radius * _radius * M_PI;
}

double Circle::get_perimeter()
{
	return 2 * M_PI * _radius;
}

void Circle::set_radius(double r)
{
	_radius = r;
}

double Circle::get_radius() const
{
	return _radius;
}
