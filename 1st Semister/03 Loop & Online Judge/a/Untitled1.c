#include <stdio.h>
int main(w,h,n){

    for(scanf("%*d");
    ~scanf("%d%d%d",&w,&h,&n);
    puts((w*h&-w*h)<n?"NO":"YES"));

}
