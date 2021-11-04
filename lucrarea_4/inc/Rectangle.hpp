#pragma once
#include "Figure.hpp"

class Rectangle final : public Figure
{
private:
	double _width;
	double _height;

public:
	Rectangle(); // default constructor
	~Rectangle() override; // destructor
	Rectangle(const Rectangle& r); // copy constructor
	Rectangle(double w, double h, std::string c); // constructor
	friend std::ostream& operator<<(std::ostream& os, const Rectangle& c);
	double get_square() override;
	double get_perimeter() override;
	void set_width(double w); // setter
	double get_width() const; // getter
	void set_height(double h); // setter
	double get_height() const; // getter
};
