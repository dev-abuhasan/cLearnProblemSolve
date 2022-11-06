#include <stdio.h>
int main () {

    long long int n;
    scanf("%d", &n);

    while(n>1){
       printf("%lld",n);
       if(n%2==0){
            n=n/2;
            printf(", ");
       } else {
            n= n-1;
            printf(", ");
       }
    }

    printf("%lld", n);

    return 0;
}
