#include <iostream>

int main() {
	int a[20],i,l,sl,n;
	std::cout << "Enter the number of elements:\n";
	std::cin >> n;
	std::cout << "Enter the array elements:\n";
	for(i=0; i<n; i++) {
		std::cin >> a[i];
	}
	if(a[0]>a[1]) {
		l=a[0];
		sl=a[1];
	} else {
		l=a[1];
		sl=a[0];
	}
	for(i=2; i<n; i++) {
		if(a[i] > l) {
			sl = l;
			l = a[i];
		} else if(a[i] > sl ) {
			sl=a[i];
		}
	}
	std::cout << "Second largest: " << sl;
	return 0;
}
