#include <iostream>

int main() {
	int n,a[15],ele,i;
	std::cout << "Emter the number of elements:\n";
	std::cin >> n;
	std::cout << "Enter array elements:\n";
	for(i=0; i<n; i++)
		std::cin >> a[i];
	std::cout << "Enter the element to search:\n";
	std::cin >> ele;
	for(i=0; i<n; i++) {
		if(a[i]==ele) {
			std::cout << "Element found at position " << i+1;
			exit(0);
		}
	}
	std::cout << "Element not found!";
	return 0;
}
