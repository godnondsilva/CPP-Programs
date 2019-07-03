#include <iostream>

int main() {
	int n,m,flag=1;
	std::cout << "Enter a number:\n";
	std::cin >> n;
	m=n;
	while(n>2) {
		if(n%2==1) {
			flag=0;
			break;
		} else {
			n=n/2;
		}
	}
	if((flag==1) && (n>=2))
		std::cout << m << " is the power of 2";
	else 
		std::cout << m << " is not the power of 2";
	return 0;
}
