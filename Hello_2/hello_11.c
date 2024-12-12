#include <stdio.h>

int main() {
    int a, b, sum;

    // Use "&" to get the address of the variables
    printf("Enter the value     of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum is = %d\n", sum);

    return 0;
}
