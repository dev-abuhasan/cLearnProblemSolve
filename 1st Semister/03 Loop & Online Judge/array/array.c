#include <stdio.h>

int main () {
    int N=6, ara[N], i;

    for(i =0; i < N; i++){
        scanf("%d", &ara[i]);
    }
    int m = ara[0];
    for(i =0; i < N; i++){
        if(ara[i] > m){
            m = ara[i];
        }
    }
    printf("%d\n", m);
    return 0;
}
