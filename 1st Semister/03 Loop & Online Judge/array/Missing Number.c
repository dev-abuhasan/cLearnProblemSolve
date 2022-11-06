#include <stdio.h>

int main () {
    int N, x, ara[200001], i;

    scanf("%d", &N);

    for(i =1; i < N; i++){
      scanf("%d", &x);
      ara[x] = i;
    }
    for(i=1; i <N; i++){
        if(ara[i] == 0){
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
