#include <iostream>
using namespace std;

int main() {
  int sum = 0,
      fib_p1 = 1,
      fib_p2 = 1,
      fib    = 1; // Fib(1) = 1, we start at 1

  for (int i = 1; i <= 4000000; i++) {
    
    if (fib % 2 == 0) {
	printf("%d\n", fib);
        sum += fib;
    }

    fib_p1 = fib_p2;
    fib_p2 = fib;
    fib = fib_p1 + fib_p2;
  }

  printf("Total Fib sum is: %d \n", sum);

  return 0;
}
