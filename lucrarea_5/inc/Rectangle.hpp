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
	Rectangle(const Rectangle&); // copy constructor
	Rectangle& operator=(const Rectangle&); // copy assignment
	Rectangle(double, double, std::string); // constructor
	friend std::ostream& operator<<(std::ostream&, const Rectangle&);
	double get_square() override;
	double get_perimeter() override;
	void set_width(double); // setter 
	double get_width() const; // getter
	void set_height(double); // setter
	double get_height() const; // getter
};
