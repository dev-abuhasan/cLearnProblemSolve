#include <stdio.h>

int main (){
    long long int N;
    scanf("%lld", &N);
    N % 3 != 0 ? printf("%d", -1) : printf("%lld", N/3);

    return 0;
}
