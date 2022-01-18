#include <iostream>
using namespace std;

void demo() {
	int n = 13,
		s = 1;
	while (n > 1) {
		s++;
		if (n % 2) {
			// Odd
			n = (3 * n) + 1;
		} else {
			// Even
			n = n / 2;
		}
	}
	printf("F(%d) = %d\n", n, s);
}

int main() {
	demo();
	int max_n = 1,
		max_x = 1;

	for (int i = 2; i < 1000000; i++) {
		int n = i,
			s = 1;
		while (n > 1) {
			s++;
			if (n % 2) {
				// Odd
				n = (3 * n) + 1;
			} else {
				// Even
				n = n / 2;
			}
		}
		if (s > max_x) {
			max_n = i;
			max_x = s;
		}
	}

	printf("F(%d) = %d\n", max_n, max_x);

	return 0;
}
















