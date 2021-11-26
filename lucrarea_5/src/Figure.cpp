#include "../inc/Figure.hpp"

Figure::Figure() : _name("Figure")
{
	std::cout << "FIGURE:\t\tDefault constructor of <" << this->get_name() << "> called!" << std::endl;
}

// Have assignment operators return a reference to *this.
Figure& Figure::operator=(const Figure& f)
{
	std::cout << "FIGURE:\t\tCopy assignment of <" << this->get_name() << "> called! ";
	if (this == &f)
	{
		std::cout << "Assignment to self!";
		return *this;
	}
	std::cout << std::endl;
	_name = f.get_name();
	return *this;
}

Figure::~Figure()
= default;

Figure::Figure(const std::string n) : _name(n)
{
	std::cout << "FIGURE:\t\tConstructor of <" << this->get_name() << "> called!" << std::endl;
}

std::string Figure::get_name() const
{
	return _name;
}

void Figure::set_name(const std::string n)
{
	_name = n;
}
