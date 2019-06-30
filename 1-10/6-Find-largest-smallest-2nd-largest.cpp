#include <iostream>

int main() {
	int a,b,c,big,small,sl;
	std::cout << "Enter the three numbers:\n";
	std::cin >> a >> b >> c;
	big=a;
	if(b>big)
		big=b;
	if(c>big)
		big=c;
	small=a;
	if(b<small)
		small=b;
	if(c<small)
		small=c;
	sl=(a+b+c)-(big+small);
	std::cout << "Largest: " << big << "\n";
	std::cout << "Smallest: " << small << "\n";
	std::cout << "Second Largest: " << sl;
	return 0;
}
