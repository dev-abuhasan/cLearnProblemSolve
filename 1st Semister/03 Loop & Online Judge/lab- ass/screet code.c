#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    int N[T],c=0,i,j;

     for(i=0; i<T; i++){
        scanf("%d",&N[i]);
    }
    for (i=0; i<T; i++) {
        for (j = 1; j <= N[i]; j++){
            if (N[i] % j == 0) {
                c++;

            }
        }
        c == 2 ? printf("Yes\n") : printf("No\n");
        c=0;
    }

    return 0;
}
