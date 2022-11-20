#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int N;
    scanf("%lld", &N);
    long long int arr[N];

    long long int result = 0;
    for(int i=0; i<N; i++){
         scanf("%lld", &arr[i]);
    }

    for (int i = 0; i<N; i++) {
       for (int j=(i+1); j<N; j++) {
            //printf("i=%d j=%d \n",i,j);
            long long int curSum = arr[i] + arr[j];
            if (curSum % 2 == 0)
                result <= curSum ? result=curSum : result;
                //printf("%d ",curSum);
       }
       if (arr[i]%2==0)
             result <= arr[i] ? result=arr[i] : result;
    }
    printf("%lld", result);


    return 0;
}

