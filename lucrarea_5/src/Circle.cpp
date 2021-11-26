#include "../inc/Circle.hpp"

Circle::Circle()
	: Figure(), _radius(1), _coordinates(new Coordinates())
{
	std::cout << "CIRCLE:\t\tDefault constructor of <" << this->get_name() << "> called!" << std::endl;
}

Circle::~Circle()
{
	std::cout << "CIRCLE:\t\tDestructor <" << this->get_name() << "> called!" << std::endl;
	delete _coordinates;
}

Circle::Circle(const double r, const std::string c, Coordinates* coordinates)
	: Figure(c), _radius(r), _coordinates(coordinates)
{
	std::cout << "CIRCLE:\t\tConstructor of <" << this->get_name() << "> called!" << std::endl;
}

// Have assignment operators return a reference to *this.
Circle& Circle::operator=(const Circle& c)
{
	std::cout << "CIRCLE:\t\tCopy assignment of <" << this->get_name() << "> called! ";
	// Handle assignment to self in operator=.
	if (this == &c)
	{
		std::cout << "Assignment to self!" << std::endl;
		return *this;
	}
	std::cout << std::endl;

	// Copy all parts of an object.
	Figure::operator=(c);

	const Coordinates* prev_coordinates = _coordinates;
	_coordinates = new Coordinates(*c.get_coordinates());
	delete prev_coordinates;

	_radius = c.get_radius();
	_name = c.get_name();

	return *this;
}

std::ostream& operator<<(std::ostream& os, const Circle& c)
{
	os << "{ name: " << c.get_name() << "; radius: " << c.get_radius() << " }" << *c._coordinates;
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

Coordinates* Circle::get_coordinates() const
{
	return _coordinates;
}

void Circle::set_coordinates(Coordinates* c)
{
	_coordinates = c;
}
