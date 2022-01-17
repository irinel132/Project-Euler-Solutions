#include <iostream>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int count = 0,
	    prime = 0,
	    n = 2;

	while (count <= 10001) {
	    if (is_prime(n)) {
		    prime = n;
		    count++;
		    printf("#%d prime found: %d\n",count , n);
	    }
	    n++;
	}

	printf("Last prime number found : %d\n", prime);
	return 0;
}
