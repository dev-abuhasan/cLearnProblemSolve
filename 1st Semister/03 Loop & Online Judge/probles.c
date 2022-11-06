# include <stdio.h>

int main(){
    int i,n,pos,neg;

    printf("\nEnter the value:");
    scanf("%d",&n);
    neg = n * -1;
    pos = n;

    printf("\nNegative numbers:");

    while(neg<=n){
        if(neg<=0){
            printf("%d ",neg);
        }
        neg++;
    }

    printf("\nPositive numbers:");
    i=0;
    while(i<=n){
        if(i>=0){
           printf("%d ",i);
           pos++;
        }
        i++;
    }

    return 0;
}
