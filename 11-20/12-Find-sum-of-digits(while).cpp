#include <iostream>

int main() {
	int sum=0,num,r;
	std::cout << "Enter a number:\n";
	std::cin >> num;
	while(num!=0) {
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	std::cout << "Sum of the digits: " << sum;
	return 0;
}
