#include<stdio.h>
int main()
{
    long long int firstNum, secondNum;
	printf("Enter the first number: ");scanf("%d",&firstNum);
	printf("Enter the second number: ");scanf("%d",&secondNum);

    if(firstNum > secondNum){
        firstNum%secondNum==0
            ? printf("The first number is divisible by the second number.")
            : printf("None of them are divisible by the other.");
    } else {
     secondNum%firstNum==0
            ? printf("The second number is divisible by the first number.")
            : printf("None of them are divisible by the other.");
    }
	return 0;
}
