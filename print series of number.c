#include <stdio.h>
int main() {
  int t = 0, s = 1, n = 0;
  printf("Fibonacci Series: %d, %d, ", t, s);
  n = t + s;

  while (n <= 150) {
    printf("%d, ", n);
    t = s;
    s = n;
    n = t + s;
  }

  return 0;
}
