#include "../inc/main.hpp"

int main()
{
	std::cout << "#######  Have assignment operators return a reference to *this.  #########" <<
		std::endl;

	Rectangle r0(4, 5, "rectangle_0");
	Rectangle r1;
	r1.set_name("rectangle_1");
	Rectangle r2(12, 25, "rectangle_2");

	std::cout << "[ ]\t\tRECTANGLE 0 BEFORE: " << r0 << std::endl;
	std::cout << "[ ]\t\tRECTANGLE 1 BEFORE: " << r1 << std::endl;
	std::cout << "[ ]\t\tRECTANGLE 2 BEFORE: " << r2 << std::endl;

	r2 = r1 = r0;

	std::cout << "[ ]\t\tRECTANGLE 0 AFTER: " << r0 << std::endl;
	std::cout << "[ ]\t\tRECTANGLE 1 AFTER: " << r1 << std::endl;
	std::cout << "[ ]\t\tRECTANGLE 2 AFTER: " << r2 << std::endl;

	std::cout << "##########################################################################" << std::endl << std::endl;
	std::cout << "###############   Handle assignment to self in operator=.  ###############" << std::endl;
	std::cout << "###############        Copy all parts of an object.        ###############" << std::endl;


	Circle c0(42, "circle_0", new Coordinates(13, 41));
	Circle c1;
	Circle c2(13, "circle_2", new Coordinates(1, 5));
	Circle* c3;

	c3 = &c0;
	c0 = *c3;
	std::cout << "( )\t\tCIRCLE 0: " << c0 << std::endl;
	std::cout << "( )\t\tCIRCLE 3: " << *c3 << std::endl;

	c3 = &c2;
	std::cout << "( )\t\tCIRCLE 3: " << *c3 << std::endl;

	std::cout << "##########################################################################" << std::endl;


	return 0;
}
