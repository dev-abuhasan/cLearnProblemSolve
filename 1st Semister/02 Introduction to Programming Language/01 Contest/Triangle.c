#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B, C;

    scanf("%d %d %d",&A,&B,&C);
    if(A >= 0 && B >= 0 && C >= 0 && A == B && B == C){
        printf("YES");
	} else{
        printf("NO");
    }

    return 0;
}

