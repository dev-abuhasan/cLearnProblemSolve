#include <stdio.h>

int main() {
    long long int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("The factors of %lld are: ", num);

    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%lld, ", i);
        }
    }
    return 0;
}
