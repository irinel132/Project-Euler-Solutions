#include <iostream>
using namespace std;

bool is_palindrome(int n) {
	int num = n,
	    rev = 0,
	    dig = 0;

	do {
		dig = num % 10;
		rev = (rev * 10) + dig;
		num = num / 10;
	} while (num > 0);

	return (n == rev);
}

int main() {
	int max = 0;
	for (int i = 999; i > 99; i--) {
		for (int j = 999; j > 99; j--) {
			if (is_palindrome(i * j)) {
				if (i * j > max) {
					max = i* j;
					printf("Palindrome found: %d\n", max);
				} 
			}
		}
	}



	printf("Palindrome found: %d\n", max);
	return 0;
}
