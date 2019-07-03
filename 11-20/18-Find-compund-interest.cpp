#include <iostream>

int main() {
	int t,year=1;
	float p,r,pa,ci;
	std::cout << "Enter the principle amount:\n";
	std::cin >> p;
	std::cout << "Enter the time period:\n";
	std::cin >> t;
	std::cout << "Enter the rate of interest:\n";
	std::cin >> r;
	pa=p;
	while (year<=t) {
		pa=pa*(1+r/100);
		std::cout << "Principle after " << year <<  " year is " << pa << "\n";
		year++;
	}
	ci=pa-p;
	std::cout << "Compound interest is " << ci;
	return 0;
}
