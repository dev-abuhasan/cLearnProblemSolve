#include <stdio.h>

int main(){
    char a[10];
    char ch = 'a';
    for(int i = 0; i<8;i++){
        a[i] = ch+8-i;
    }
    a[8] = '\0';

    //print the value of arr
    for(int i=0;i<11;i++){
        printf("%c", a[i]);
    }

    /**
        a will be stored those character in array => ihgfedcb  a
    */

    return 0;
}



