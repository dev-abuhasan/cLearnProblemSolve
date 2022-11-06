#include <stdio.h>

int main () {
    int N,K,C=0,i;
    scanf("%d%d",&N,&K);

    int Run[N];

    for(i=0; i < N; i++){
        scanf("%d",&Run[i]);
    }

    for (i=0;i < (sizeof (Run) /sizeof (Run[0]));i++) {
        if(Run[i] < K){
            C++;
        }
    }
    printf("%d",C);

    return 0;
}
