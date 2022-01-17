#include <iostream>
using namespace std;

int main() {
	int n = 100,
	    sm_sq = 0,
	    sq_sm = 0;

	for (int i = 1; i <= n; i++) {
		sm_sq = sm_sq + (i * i);
		sq_sm = sq_sm + i;
	}
	sq_sm = sq_sm * sq_sm;

	printf("Sum of squares: %d, Square of sum: %d, diff is: %d\n", 
			sm_sq, sq_sm, (sq_sm - sm_sq));

	return 0;
}
