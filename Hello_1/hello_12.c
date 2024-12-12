#include<stdio.h>
int main (){
    int number, remainder;

    number  = 5;

    remainder = number % 2 ;

    if (remainder == 1){
    printf("This number is ODD.\n");
    }
    else{
    printf("This number is EVEN.\n");    
    }
    return 0;

}