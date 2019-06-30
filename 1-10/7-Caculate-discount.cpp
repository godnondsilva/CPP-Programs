#include <iostream>

int main() {
	float ta,d,fa;
	std::cout << "Enter the total amount:\n";
	std::cin >> ta;
	d = 0;
	if(ta>1000)
		d = 0.08*ta;
	fa=ta-d;
	std::cout << "Total amount: " << ta << "\n";
	std::cout << "Discount: " << d << "\n";
	std::cout << "Final amount: " << fa;
	return 0;
}
