#include <iostream>

int main() {
	int a,b;
	std::cout << "Enter 2 numbers to be swapped:\n";
	std::cin >> a >> b;
	a = a+b;
	b = a-b;
	a = a-b;
	std::cout << "After swapping, the values are:\n" << a << " " << b;
	return 0;
}
