#include <iostream>
using namespace std;

bool divizible_by_all(int num, int n) {
    for (int i = 2; i <= n; i++) {
	    if (num % i != 0) {
		    return false;
	    }
    }
    return true;
}

int main() {
    int num = 1,
	n   = 20;
    while (!divizible_by_all(num++, n));

    printf("The smallest number that is evenly divisible from 1 to %d is: %d\n",n , num - 1);
    return 0;
}

