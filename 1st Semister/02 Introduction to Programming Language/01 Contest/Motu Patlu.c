#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M;

    scanf("%d %d",&N,&M);

    if(N >= 0 && M >= 0){
        printf("%d", N + M);
    }

    return 0;
}


