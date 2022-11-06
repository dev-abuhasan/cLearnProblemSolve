#include <stdio.h>

int main () {
    int i=1;

    while(i != 10) {
        printf("%d - Hello\n", i);
        i++;
    }

    for(int j = 1; j < 10; j++){
         printf("%d - Hello\n", j);
    }

     while(5) {
        printf("Hello\n");
     }
    return 0;
}
