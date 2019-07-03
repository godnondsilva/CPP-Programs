#include <iostream>

int main() {
	int r,c,rsum,csum,a[20][20],i,j;
	std::cout << "Enter the matrix order:\n";
	std::cin >> r >> c;
	std::cout << "Enter the matrix elements:\n";
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			std::cin >> a[i][j];
		}
	}		
	for(i=0; i<r; i++) {
		rsum=0;
		for(j=0; j<c; j++) {
			rsum = rsum+a[i][j];
			std::cout << "Sum of the row " << i << " is " << rsum << "\n";
		}
	}		
	for(j=0; j<c; j++) {
		csum=0;
		for(i=0; i<r; i++) {
			csum = csum+a[i][j];
			std::cout << "Sum of the column " << i << " is " << csum << "\n";
		}
	}
	return 0;
}
