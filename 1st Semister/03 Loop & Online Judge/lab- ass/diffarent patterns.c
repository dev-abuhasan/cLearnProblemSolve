#include <stdio.h>

int main () {
    int i, j, N;
    scanf("%d", &N);
    for (i = 0; i <= N; ++i) {
        for (j = 0; j <= i; ++j) {
            if(i-j !=0){
                printf("%d ", i-j);
            }
        }
        if(i-j !=0){
           printf("\n");
        }
    }
    return 0;
}
