#include <stdio.h>

int main() {

    long long int n1, n2, i, gcd, lcm;

    printf("Enter the first number: ");scanf("%d",&n1);
    printf("Enter the second number: ");scanf("%d",&n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    lcm = (n1 * n2) / gcd;

    printf("The LCM of %lld and %lld is %lld.", n1, n2, lcm);
    return 0;
}
