#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B;

    scanf("%d %d",&A,&B);

    if(A >= 0 && B >= 0 && A > B){
        printf("%d", A - B);
    } else if(A >= 0 && B >= 0 && B > A) {
         printf("%d", B - A);
    }

    return 0;
}


