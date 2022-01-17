#include <iostream>
using namespace std;


int main() {
	long n = 0;
	int  i = 1,
		 d = 0,
		 m_d = 500;

	while (d <= m_d) {
		d = 0;
		n += i++;

		for (int j = 1; j <= n; j++) {
			if (n % j == 0)
				d++;
				printf("Nr: %10ld, divs: %3d\n", n, d);
		}
	}

	printf("Number is: %ld\n", n - 1);


	return 0;
}
