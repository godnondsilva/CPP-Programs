#include <iostream>

int main() {
	int num,temp,sum=0,r;
	std::cout << "Enter a three digit number:\n";
	std::cin >> num;
	temp = num;
	do {
		r = num%10;
		sum = sum+(r*r*r);
		num = num/10;
	} while(num!=0);
	if(temp==sum) 
		std::cout << "Amstrong number!";
	else
		std::cout << "Not a Amstrong number!";
	return 0;
}
