#include <iostream>

int main() {
	int gcd(int, int);
	int a,b,g,l;
	std::cout << "Enter 2 numbers:\n";
	std::cin >> a >> b;
	g = gcd(a,b);
	l = (a*b)/g;
	std::cout << "GCD: " << g << "\n";
	std::cout << "LCM: " << l;
	return 0;
}

int gcd(int a, int b) {
	while(a!=b) {
		if(a>b) {
			a=a-b;
		} else {
			b=b-a;
		}
	}
	return a;
}
