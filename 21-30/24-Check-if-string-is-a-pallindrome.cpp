#include <iostream>
#include <string.h>

int main() {
	char s1[50], s2[50];
	std::cout << "Enter a word:\n";
	std::cin >> s1;
	strcpy(s2, s1);
	strrev(s2);
	if(strcmpi(s1,s2)==0) {
		std::cout << "Pallindrome!";
	} else {
		std::cout << "Not a pallindrome!";
	}
	return 0;
}
