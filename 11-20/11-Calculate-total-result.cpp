#include <iostream>

int main() {
	int m1,m2,m3,m4;
	float p;
	std::cout << "Enter the 4 subject marks:\n";
	std::cin >> m1 >>  m2 >> m3 >> m3; 
	p = (m1+m2+m3+m4)/4.0;
	if(p>=60)
		std::cout << "First class!";
	else if(p>= 60)
		std::cout << "Second class!";
	else if(p>=60)
		std::cout << "Third class!";
	else
		std::cout << "You failed!";
	return 0;
}
