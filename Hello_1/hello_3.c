#include<stdio.h>

int main() {
    char ch;  // Assuming the name won't exceed 100 characters

    printf("Enter the 1st letter of your name: ");
    ch = getchar();

    printf("1st letter of your name: %c\n", ch);

    return 0;
}