#include <iostream>
#include <fstream>

using namespace std;

int n = 100,
	a[100][50],
	x[100];

void print_arr() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 50; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

int main() {
	ifstream in("num.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 50; j++) {
			char c;
			in >> c;
			a[i][j] = c - 48;
		}
	}
	
	for (int j = 0; j < 50; j++) {
		for (int i = 0; i < 100; i++) {
			x[j] += a[i][j] ;
		}
	}

	print_arr();

	return 0;
}
