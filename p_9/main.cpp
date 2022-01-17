#include <iostream>
using namespace std;



int main() {
	for (int i = 2; i < 1000; i++) {
		for (int j = i + 1; j < 1000 - i; j++) {
			int z = 1000 - (i + j);
			if ((i * i) + (j * j) == (z * z)) {
				printf("%d <  %d <  %d, a*b*c = %d\n", i, j, z, (i * j *z ));
				return 0;
			}
		}
	}

	return 0;
}
