#include <stdio.h>

int main() {
    char sen[1000];

    //gets(sen);
    fgets(sen, sizeof(sen), stdin);

    int i=0,count=0;
    while(sen[i] != '\0'){
        // vowel hole count ++
        if(sen[i]=='a' || sen[i]=='e'||
           sen[i]=='i' || sen[i]=='o'||
           sen[i]=='u'){
            count++;
        }
        i++;
    }

    printf("%d \na", count);


    char ch = 'A';
    ch += 32;
    printf("%c \n", ch);


    char mNam[100];
    fgets(mNam, sizeof(mNam), stdin);
    for(int i=0; mNam[i]!='\0'; i++){
        if(mNam[i]>= 'a' && mNam[i]<= 'z'){
            mNam[i] -=32;
        }
    }
    puts(mNam);



    return 0;
}
