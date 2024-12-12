#include<stdio.h>
int sum (int a, int b);
void Table(int n);

int main (){
    int n;
    printf("Enter the first number: ");
    scanf("%d",&n);
    Table(n); //argument / actual parameter 

    return 0;
}
// int sum(int x, int y){
    // return x + y;
// }

void Table(int n){  //parameter / formal parameter 
    for(int i=1; i<=10; i++){
        printf("%d\n",i*n);
    }
}
