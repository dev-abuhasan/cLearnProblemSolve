#include <stdio.h>

int main(){

    char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';

    /**
        1. Second statement is
            => a[0] = 98;
            which will print lowercase => b

        2. Third statement is
            => a[1] = 97;
            which will print lowercase => a
    */

    //print the value of arr
    for(int i=0;i<11;i++){
        printf("%c ", a[i]);
    }

    return 0;
}


