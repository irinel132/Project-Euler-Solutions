#include <iostream>
#include <fstream>

using namespace std;

int x[100];


int main() {
	ifstream in("num.txt");
	for (int i = 0; i < 100; i++) {
		for (int j = 49; j >= 0; j--) {
			char c;
			in >> c;
			x[j] += (c - 48);

		}
	}

	for (int i = 0; i < 99; i++)	 {
		x[i+1] += x[i] / 10;
		x[i] = x[i] % 10;

	}

	int i = 100;
	while (!x[--i]);
	for (int j = 0; j < 10; j++) {
		printf("%d", x[i - j]);
	}
	printf("\n");

	return 0;
}
