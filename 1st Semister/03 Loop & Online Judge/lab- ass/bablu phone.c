#include <stdio.h>

int main () {
    int T,i,min=0, curr=0;
    scanf("%d",&T);
    int X[T];

    for(i=0; i<T; i++){
        scanf("%d%*c",&X[i]);
    }

    for (i=0; i<T; i++) {
        curr=X[i];

        if(curr < 60) {
            min =  60 - X[i] + 40 + 60;
            printf("%d minutes\n", min);
        } else if(curr < 80 ){
            min =  2*(80 - X[i])+60;
            printf("%d minutes\n", min);
        } else if(curr < 101){
            min =  3*(100 - X[i]);
            printf("%d minutes\n", min);
        }

    }

    return 0;
}

