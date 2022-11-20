#include <stdio.h>

int main(){

    int a=1,n=15,r=2,arr[n],i;
    float sum = 0;
    float  tn = a * (pow(r, n - 1));

    arr[0] = a;

    for(i=1;i<n;i++){
        a=a*r;
        arr[i] = a;
    }

    //print the value of arr
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

