#include <stdio.h>

int main() {

    int n, i, j;
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 1)
                printf("%-1d",j);
            else if(j == n)
                printf("%-1d",n);
            else if(i == n)
                printf("%-1d",n);
            else if(j == 1)
                printf("%-1d",i);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


