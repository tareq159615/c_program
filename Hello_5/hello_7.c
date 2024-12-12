#include<stdio.h>
int main (){
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10;
    int max = hello(ara ,n);
    printf("%d", max);

    return 0;
}
int hello(int ara[] , int n){
    int max = ara[0];
    for(int i = 1; i <= n ; i++)
    {
        if(ara[i] > max){
            max=ara[i];
        }

    }
    return max;
}

