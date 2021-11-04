#include "../inc/Figure.hpp"

Figure::Figure() : _name("Figure")
{
	std::cout << "FIGURE:\t\tDefault constructor of <" << this->get_name() << "> called!" << std::endl;
}

Figure::~Figure()
= default;

Figure::Figure(const std::string n) : _name(n)
{
	std::cout << "FIGURE:\t\tConstructor of <" << this->get_name() << "> called!" << std::endl;
}

Figure& Figure::operator=(const Figure& f)
{
	_name = f._name;
	std::cout << "FIGURE:\t\tCopy assignment operator of <" << this->get_name() << "> called!" << std::endl;
	return *this;
}

std::string Figure::get_name() const
{
	return _name;
}

void Figure::set_name(const std::string n)
{
	_name = n;
}
