#include <stdio.h>

int main () {
    long long int T,S,A,B,C;
    scanf("%lld",&T);

    for(int i=0; i < T; i++){
        scanf("%lld%lld%lld%lld",&S,&A,&B,&C);
        printf("%lld\n", S - (A + B + C));
    }


    return 0;
}
