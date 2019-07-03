#include <iostream>

int main() {
	int r,c,a[20][20],b[20][20],s[20][20],i,j;
	std::cout << "Enter the matrix order:\n";
	std::cin >> r >> c;
	std::cout << "Enter matrix A:\n";
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			std::cin >> a[i][j];
		}
	}
	std::cout << "Enter matrix B:\n";
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			std::cin >> b[i][j];
		}
	}
	std::cout << "Sum of the matrix:\n";
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			s[i][j] = a[i][j] + b[i][j];
			std::cout << s[i][j];
		}
	}
	return 0;
}
