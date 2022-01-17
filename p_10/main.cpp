#include <iostream>
using namespace std;

bool is_prime(int n) {
	if (n == 2 || n == 3) {return true; }
	for (int i = 2; i < (n/2) + 1; i++) {
		if (n % i == 0) { return false;}
	}
	return true;
}

int main() {
	long s = 0;
	int n = 2000000;
	for (int i = 2; i < n; i++) {
		if (is_prime(i)) {
			printf("Prime: %d\n", i);
			s += i;
		}
	}
	
	printf("Sum of all primes under %d is %ld", n, s);

	return 0;
}
