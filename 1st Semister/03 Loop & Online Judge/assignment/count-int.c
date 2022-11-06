#include <stdio.h>

int main() {
  long long int n, dig = 0;

  scanf("%d", &n);

  do {
    n /= 10;
    ++dig;
  } while (n != 0);

  printf("%lld digits", dig);
}
