#include "../inc/main.hpp"

int main()
{
	const Circle c0; // default constructor
	std::cout << "( )\t\tCIRCLE 0: " << c0 << std::endl;

	const Circle c1(5, "circle_1"); // constructor
	std::cout << "( )\t\tCIRCLE 1: " << c1 << std::endl;

	//Circle c2(c1); // disabled copy constructor
	//c1 = c0; // // disabled copy assignment

	const Rectangle r0(4, 5, "rectangle_1"); // constructor
	std::cout << "[ ]\t\tRECTANGLE 0: " << r0 << std::endl;

	const Rectangle r1(r0); // copy constructor
	std::cout << "[ ]\t\tRECTANGLE 1: " << r1 << std::endl;

	return 0;
}
