#include <iostream>
#include <fstream>
using namespace std;

int d[20][20],
	n = 20;

void read_input_file() {
	ifstream input("input.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			input >> d[i][j];
		}
	}
}

void print_matrix() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", d[i][j]);
		}
		printf("\n");
	}
}

int main() {
	read_input_file();
	print_matrix();

	int z = 4,
		max = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n -z; j++) {
			int m_v = 1,
				m_h = 1,
				m_d = 1,
				m_d2 = 1;
			for (int x = 0; x < z; x++) {
				m_v *= d[i + x][j    ];
				m_h *= d[j    ][i + x];
				if ( i < n - z)
					m_d *= d[i + x][j + x];
				if (j < n -z)
					m_d2 *= d[i + x][j - x];
			}

			if (m_v > max) 
				max = m_v;
			if (m_h > max)
				max = m_h;
			if (m_d > max)
				max = m_d;
			if (m_d2 > max)
				max = m_d2;
		}
	}

	printf("Answer: %d\n", max);

	return 0;
}
