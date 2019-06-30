#include <iostream>

int main() {
	float r,a,c;
	std::cout << "Enter the radius:\n";
	std::cin >> r;
	a = 3.14*r*r;
	c = 2*3.14*r;
	std::cout << "Area of the circle:\n" << a;
	std::cout << "\nCircumference of the circle:\n" << c;
	return 0;
}
