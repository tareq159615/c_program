#include<stdio.h>
int main () { 
    int n = 5;
    int i = 1;
    while (i<=10)
    {
        /* code */
        printf("%d x %d = %d\n", n, i, i*n);
        i = i+1;
    }
    return 0;
}