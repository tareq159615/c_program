#include<stdio.h>
int sum (int a, int b);

int main (){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("Sum is %d", s);

    return 0;
}
int sum(int x, int y){
    return x + y;
}
