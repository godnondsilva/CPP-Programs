#include <iostream>

int main() {
	int a,b,c;
	std::cout << "Enter 2 numbers to be swapped:\n";
	std::cin >> a >> b;
	c = a;
	a = b;
	b = c;
	std::cout << "After swapping, the values are: \n" << a << " " << b;
	return 0;
}
