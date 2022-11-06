#include <stdio.h>

int main (){

    int x, y;
    printf("Please Enter an input: ");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x % 2 == 0){
        printf("x is even = %d\n", x);
    } else{
        printf("x is odd = %d\n", x);
    }

    if(x > y){
        printf("x is getter than y = %d > %d\n", x, y);
    } else{
        printf("y is getter than x = %d > %d\n", y, x);
    }


    return 0;
}
