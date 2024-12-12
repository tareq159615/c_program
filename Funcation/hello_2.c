#include<stdio.h>
void muslim();
void nonmuslim();

int main () {
    printf("You muslim then type A & You Non Muslim then type B : ");
    char ms;
    scanf("%c", &ms);
    if (ms == 'A'){
        muslim();
    }
    else{
        nonmuslim();
    }
}

void muslim () { 
    printf ("Asslamulikum");
}

void nonmuslim () { 
    printf("You will be fine");
}
