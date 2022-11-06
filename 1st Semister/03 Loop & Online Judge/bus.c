#include <stdio.h>

int main () {

    int n, i, w, sum=0;
    scanf("%d", &n);

    for(i=1; i <= n; i++){
        scanf("%d", &w);
        sum += w;
    }
    printf("Total sum of weights = %d", sum);
    return 0;
}
