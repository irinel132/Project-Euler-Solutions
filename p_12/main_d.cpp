#include <iostream>
#include <math.h>
using namespace std;

int number = 1;

long triangle_number (int n) {
	return ((n * (n + 1)) / 2);
}

int get_div_n (long n) {
	int d = 1;
	for (long i =1; i <= n / 2; i++) {
		if (n % i == 0) 
			d += 1;
	}

	return d;
}


int main() {
	
	int d = 0;
	while (d <= 500) {
		long tn = triangle_number(number);
		d = get_div_n(tn);

		printf("|T(%5d) = %10ld || Divs: %3d|\n", number, tn, d);
		number++;
	}
	number--;

	printf("T(%5d) = %10ld, Divs: %3d\n", number, triangle_number(number), get_div_n(triangle_number(number)));
	printf("Div(%d) = %d\n", 28, get_div_n(28));

	return 0;
}
