#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld",&N);
    int total = N * (N-1) / 2;
    printf("%lld", total);

    return 0;
}
