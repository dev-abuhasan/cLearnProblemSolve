#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int X, Y;

    scanf("%d %d",&X,&Y);
    if(X >= 0 && X <= 10 && Y >= 0 && Y <= 10){
        printf("%d%%", X * Y);
    }

    return 0;
}



