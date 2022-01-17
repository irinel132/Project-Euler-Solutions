#include <iostream>
using namespace std;



int main () {
  int f1 = 0, f2 = 1, f3 = 0, n = 100, sum = 0;
  for (int i = 0; f3 < 4000000; i++) {
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;

    if (f3 % 2 == 0 && f3 < 4000000)
	    sum += f3;

    printf("Fib #%d is %d\n", i + 1, f3);
  }

  
  printf("\nThe sum is %d\n", sum);

  return 0;
}
