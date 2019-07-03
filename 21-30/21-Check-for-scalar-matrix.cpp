#include <iostream>

int main() {
	int a[10][10],r,c,i,j,s=0,e;
	std::cout << "Enter the matrix order:\n";
	std::cin >> r >> c;
	std::cout << "Enter the matrix elements:\n";
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			std::cin >> a[i][j];
			
		}
	}
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n";
	}
	if(r==c) {
		s=1;
		e=a[0][0];
		for (i=0; i<r; i++) {
			for(j=0; j<c; j++) {
				if(i==j) {
					if(a[i][j]!=e) {
						s=0;
					}
				}
				else {
					if(a[i][j]!=0) {
						s=0;
					}
				}
			}
		}
		if(s==1) {
			std::cout << "Matrix is scalar";
		} else {
			std::cout << "Matrix is not scalar";
		}
	} else {
		std::cout << "Matrix is not a square matrix";
	}
	return 0;
}
