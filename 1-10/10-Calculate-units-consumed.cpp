#include <iostream>

int main() {
	int units;
	float amt; 
	std::cout << "Enter the units consumed:\n";
	std::cin >> units;
	if(units < 30) 
		amt = units*3.50;
	else if(units < 50)
		amt = 101.5+(units-29)*4.50;
	else if(units < 100)
		amt = 101.5+85+(units-49)*5.20;
	else 
		amt = 101.5+85+262.5+(units-99)*5.85;
	std::cout << "Total amount: " << amt;
	return 0;
}
