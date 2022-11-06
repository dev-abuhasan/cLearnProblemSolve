#include <stdio.h>

int main() {
      long long int n, i, c = 0;
      scanf("%d", &n);

      for (i = 1; i <= n; i++) {
          if (n % i == 0) {
             c++;
          }
      }
      c == 2 ? printf("Prime") : printf("Composite");

      return 0;
}2
