#include <iostream>

int main() {
	int n,ar[100],sum=0;
	float avg;
	std::cout<< "Enter the number of elements:\n";
	std::cin >> n;
	std::cout << "Enter any elements:\n";
	for(int i=0; i<n; i++) {
		std::cin >> ar[i];
		sum=sum+ar[i];
	}
	avg = (float)sum/n;
	std::cout << "The sum is: " << sum << "\n";
	std::cout << "The average is: " << avg;
	return 0;
}
