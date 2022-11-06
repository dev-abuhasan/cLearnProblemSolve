#include <stdio.h>

int main () {

    int ara[10];
    ara[0] = 2345;
    ara[1] = 345;
    ara[2] = ara[0]-ara[1];

    printf("%d\n%d\n%d\n", ara[0], ara[2], ara[3]);


    for(int i =0; i < 5; i++){
        scanf("%d", &ara[i]);
    }
    for(int i =0; i < 5; i++){
        printf("%d\n", ara[i]);
    }
    return 0;
}
