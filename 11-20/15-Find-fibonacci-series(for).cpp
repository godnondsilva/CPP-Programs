#include <iostream> 

int main() {
	int n,a=0,b=1,c;
	std::cout << "Enter the limit:\n";
	std::cin >> n;
	std::cout << a << "\n" << b << "\n";
	for(int i=3; i<=n; i++) {
		c=a+b;
		std::cout << c << "\n";
		a=b;
		b=c;
	}
}
