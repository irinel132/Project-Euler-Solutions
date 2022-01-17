#include <iostream>
using namespace std;

bool is_prime(long n) {
	for (long i = 2; i < n / 2; i++) {
		if (n % i == 0) { return false; }
	}
	return true;
}


int main() {

	long n = 600851475143,
	     i = 2, p = 0;

	while (n > i) {
		if (n % i == 0) {
			if (is_prime(i)) {
				p = i;
				n = n / i;

				printf("New prime %ld remains %ld \n", p, n);
			}
		}

		i++;
	}	

	printf("Largest prime factor is %ld \n", p);

	return 0;
}
