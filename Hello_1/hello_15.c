#include<stdio.h>
int main () 
{
    char ch = 'G';

    if (ch>='a' && ch<='z'){
        printf("%c is lower case.",ch);
    }
    else if (ch>='A' && ch<='Z'){
        printf("%c is lower case.",ch);
    }
    return 0;
}