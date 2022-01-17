#include <iostream>
using namespace std;

bool is_prime (long n) {
	for (long i = 2; i < n / 2; i++) {
		if (n % i == 0) { return false; }
	}

	return true;
}

int main() {
	long n = 600851475143;

	for (long i = n / 2; i > 2; i--) {
		//printf("%ld / %ld\n", n, i);
		if (n % i == 0) {
			printf("%ld / %ld = 0", n, i);
			if (is_prime(i)) {
				printf("Largest prime factor is %ld\n", i); 
				break;
			}
		}
	}

	return 0;	
}
