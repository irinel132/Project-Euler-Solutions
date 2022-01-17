#include <iostream>
#include <fstream>
using namespace std;

int digits[1000];

int main() {
	ifstream input("input.txt");
	char c;
	int  d = 13,
	     m = 0 ;
	
	int i = 0;
	while (input >> c) {
		// In Asci, numbers start from 48
		digits[i++] = c - 48;
	}

	for (i = 0; i < 1000 - d; i++) {
		int p = 1;
		for (int j = i; j < i + d; j++) {
			p = p * digits[j];
		}

		if (p > m) {
		    	//printf("New max product: %d\n", p);
			m = p;
		}
	}

	printf("Value of product of greatest adjacent %d digits is %d\n", d, m);

	return 0;
}
