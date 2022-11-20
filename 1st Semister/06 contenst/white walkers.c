#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int T, N, C, A[N], sum=0;

    scanf("%lld", &T);


    for(int i=0; i<T; i++){
        scanf("%lld %lld", &N, &C);
        for(int j=0; j<N; j++){
            scanf("%lld", &A[j]);
            sum = sum + A[i];
        }
        N * 2 <= C ? printf("Yes\n") : printf("No\n");
    }



    return 0;
}
