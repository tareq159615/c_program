#include<stdio.h>
int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d" ,&n);

    if(n < 0)
    {
        printf("Tne number is negative\n");
    }
    
    else
    {
        printf("The number is positive\n");
    }
    return 0;
}

