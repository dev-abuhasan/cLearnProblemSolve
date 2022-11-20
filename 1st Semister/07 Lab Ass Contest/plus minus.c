#include <stdio.h>

int main (){

    int N, count=0;
    scanf("%d", &N);
    char S[N];
    scanf("%s",S);

    for (int i=0; i<N; i++) {
        int cur_count = 1;
        for (int j=i+1; j<N; j++){
            if (S[i] != S[j])
                break;
            cur_count++;
        }
        if (cur_count > count){
            count = cur_count;
        }
    }
    printf("%d",count);

    return 0;
}

