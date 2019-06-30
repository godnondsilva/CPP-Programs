#include <iostream>

int main() {
	char ch;
	std::cout << "Enter a letter:\n";
	std::cin >> ch;
	if(ch >= 'A' && ch <= 'Z')
		std::cout << "Uppercase!";
	else if(ch >= 'a' && ch<='z')
		std::cout << "Lowercase!";
	else 
		std::cout << "Not an alphabet!";
	return 0;
}
