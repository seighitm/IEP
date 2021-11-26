#include "../inc/Rectangle.hpp"

Rectangle::Rectangle() : Figure(), _width(0), _height(0)
{
	std::cout << "RECTANGLE:\tDefault constructor of <" << this->get_name() << "> called!" << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "RECTANGLE:\tDestruct <" << this->get_name() << "> called!" << std::endl;
}

Rectangle::Rectangle(const double w, const double h, const std::string c) : Figure(c), _width(w), _height(h)
{
	std::cout << "RECTANGLE:\tConstructor of <" << this->get_name() << "> called!" << std::endl;
}

Rectangle::Rectangle(const Rectangle& r)
	: Figure(r), _width(r._width), _height(r._height)
{
	std::cout << "RECTANGLE:\tCopy constructor of <" << this->get_name() << "> called!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& r)
{
	os << "{ name: " << r.get_name() + "; height: " << r.get_height() << "; width: " << r.get_width() << " } ";
	return os;
}

Rectangle& Rectangle::operator=(const Rectangle& r)
{
	std::cout << "RECTANGLE:\tCopy assignment of <" << this->get_name() << "> called! " << std::endl;
	Figure::operator=(r);
	_height = r.get_height();
	_width = r.get_width();
	return *this;
}


double Rectangle::get_square()
{
	return _width * _height;
}

double Rectangle::get_perimeter()
{
	return _width * 2 + _height * 2;
}

void Rectangle::set_width(double w)
{
	_width = w;
}

double Rectangle::get_width() const
{
	return _width;
}

void Rectangle::set_height(double h)
{
	_height = h;
}

double Rectangle::get_height() const
{
	return _height;
}
