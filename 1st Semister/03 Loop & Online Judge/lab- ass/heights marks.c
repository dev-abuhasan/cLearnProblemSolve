#include <stdio.h>

int main () {
    int N,i;
    scanf("%d",&N);

    int Marks[N], hm=0;

    for(i=0; i<N; i++){
        scanf("%d",&Marks[i]);
        if(hm < Marks[i])
           hm=Marks[i];
    }

    for (i=0; i<N; i++) {
        printf("%d ",hm-Marks[i]);
    }

    return 0;
}
