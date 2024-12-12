#include<stdio.h>
int main () {
    int a, b, c;
    for( a = 1; a <= 3 ; a++){   //3
        for( b = 1; b <= 3; b++){   //3*3=9
            for( c = 1; c <= 3; c++){  //3*3*3 = 27
                printf(" * %d, *%d, *%d\n", a, b, c);
            } 

        } 
    }
    return 0;
}