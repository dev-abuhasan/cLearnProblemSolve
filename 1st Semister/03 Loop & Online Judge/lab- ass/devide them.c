#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int Roll[N],i,j;

     for(i=0; i<N; i++){
        scanf("%d",&Roll[i]);
    }

    int K;
    scanf("%d",&K);

    for (i=K; i<N; i++) {
        printf("%d ",Roll[i]);
    }
    for (j=0; j<K; j++){
        printf("%d ",Roll[j]);
    }
    return 0;
}
