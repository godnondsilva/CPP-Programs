#include <iostream> 
#include <math.h> 

int main() {
	float a,b,c,s,A;
	std::cout << "Enter the 3 sides of a traingle:\n";
	std::cin >> a >> b >> c;
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	std::cout << "Area of the triangle:\n" << A;
	return 0;
}
