#include <stdio.h>

int main() {
    long long int n, sum = 0, r;

    for (scanf("%d", &n); n != 0; n = n/10) {
        r = n % 10;
        sum = sum + r;
    }

    printf("%lld", sum);

    return 0;
}
