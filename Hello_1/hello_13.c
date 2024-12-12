#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (number % 2 == 1){
        printf("This number is odd");
    }
    else{
        printf("This number even.");
    }
    return 0;
}