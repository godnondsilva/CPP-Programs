#include <iostream>

int main() {
	int y;
	std::cout << "Enter a year:\n";
	std::cin >> y;
	if((y%100!=0) && (y%400==0) || (y%4==0))
		std::cout << y << " is leap year!";
	else
		std::cout << y << " is not a leap year";
	return 0;
}
