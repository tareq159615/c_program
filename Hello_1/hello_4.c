#include<stdio.h>
int main (){
    int num1,num2;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2rd number: ");
    scanf("%d",&num2);

    printf(" %d + %d = %d\n", num1, num2, num1+num2);
    printf(" %d - %d = %d\n", num1, num2, num1-num2);
    printf(" %d / %d = %d\n", num1, num2, num1/num2);
    printf(" %d * %d = %d\n", num1, num2, num1*num2);
}