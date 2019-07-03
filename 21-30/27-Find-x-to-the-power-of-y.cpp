#include <iostream>
#include <math.h>

int main() {
	int power(int, int);
	int x,y,p;
	std::cout << "Enter base:\n";
	std::cin >> x;
	std::cout << "Enter exponent:\n";
	std::cin >> y;
	p=power(x,y);
	std::cout << x << " to the power of " << y << " is " << p;
	return 0;
}

int power(int a, int b) {
	return pow(a,b);
}
