#include "../inc/main.hpp"

int main()
{
	Circle c0; // default constructor
	std::cout << "( )\t\tCIRCLE 0: " << c0;
	std::cout << " { " << "perimeter: " << c0.get_perimeter() << "; square: " << c0.get_square() << " }" << std::endl;

	Circle c1(5, "circle_1"); // constructor
	std::cout << "( )\t\tCIRCLE 1: " << c1;
	std::cout << " { " << "perimeter: " << c1.get_perimeter() << "; square: " << c1.get_square() << " }" << std::endl;

	//Circle c2(c1); // disabled copy constructor
	//c1 = c0; // // disabled copy assignment

	Rectangle r0(4, 5, "rectangle_0"); // constructor
	std::cout << "[ ]\t\tRECTANGLE 0: " << r0;
	std::cout << " { " << "perimeter: " << r0.get_perimeter() << "; square: " << r0.get_square() << " }" << std::endl;

	Rectangle r1(r0); // copy constructor
	r1.set_name("rectangle_1");
	std::cout << "[ ]\t\tRECTANGLE 1: " << r1;
	std::cout << " { " << "perimeter: " << r1.get_perimeter() << "; square: " << r1.get_square() << " }" << std::endl;

	return 0;
}
