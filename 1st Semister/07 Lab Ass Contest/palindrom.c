#include <stdio.h>

int main (){
    int T,n;
    scanf("%d", &T);
    char words[20][100];


    for(int i=0; i<T; i++){
      scanf("%s[^\n]",words[i]);
    }

     for(int i=0;i<T;i++){

        n=strlen(words[i]);
        int flag = 0;
        for(int j=0; j<n; j++){
             if(words[i][j] != words[i][n-j-1]) {
                flag = 1;
                break;
             }
        }

        if (flag==1){
            printf("Case #1: Not Palindrome\n");
        } else {
            if(n <= 7){
                 printf("Case #3: %s\n", words[i]);
            } else{
                printf("Case #2: %c%d%c\n",words[i][0], n-2,words[i][0]);

            }
        }

     }


    return 0;
}


