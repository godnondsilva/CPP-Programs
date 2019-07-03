#include <iostream>
#include <ctype.h>
#include <string.h>

int main() {
	char str[50];
	int vc=0,cc=0,i,l;
	std::cout << "Enter a string:\n";
	std::cin.getline(str, 100);
	l = strlen(str);
	for(i=0; i<l; i++) {
		if(isalpha(str[i])) {
			switch(toupper(str[i])) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					vc++;
					break;
				default: 
					cc++;
			}
		}
	}
	std::cout << "Number of vowels: " << vc << "\n";
	std::cout << "Number of consonants: " << cc;
}
