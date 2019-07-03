#include <iostream>

int main() {
	int n,fact=1,i;
	std::cout << "Enter a number:\n";
	std::cin >> n;
	for(i=1;i<=n;i++) {
		fact = fact*i;
	}
	std::cout << "Factorial is: " << fact;
	return 0;
}
