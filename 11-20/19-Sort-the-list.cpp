#include <iostream>

int main() {
	int n,a[100],i,j,temp;
	std::cout << "Enter the number of elements:\n";
	std::cin >> n;
	std::cout << "Enter the array of elements:\n";
	for(i=0; i<n; i++) {
		std::cin >> a[i];
	}
	for(i=0;i<n;i++) {		
		for(j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	std::cout << "Sorted elements are ";
	for (i=0; i<n; i++)
		std::cout << "\n" << a[i];
	return 0;
}
