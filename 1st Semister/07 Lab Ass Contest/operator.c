#include <stdio.h>

int main (){
    char S[20];
    gets(S);

    int a,b, sum=0;
    scanf("%d %d", &a,&b);

    for(int i=0; i<20; i++){
       if(S[i]=='+'){
            sum= sum+(a+b);
       } else if(S[i]=='*'){
            sum=sum+(a*b);
       }
    }
    printf("%d", sum);

    return 0;
}

