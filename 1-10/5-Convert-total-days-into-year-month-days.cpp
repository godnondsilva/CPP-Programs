#include <iostream>

int main() {
	int td,y,m,d,rem;
	std::cout << "Enter the total number of days:\n";
	std::cin >> td; 
	y = td/365;
	rem = td%365;
	m = rem/30;
	d = rem%30;
	std::cout << "Year(s): " << y << "\n";
	std::cout << "Month(s): " << m << "\n";
	std::cout << "Day(s): " << d;
	return 0;
}
