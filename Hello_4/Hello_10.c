#include<stdio.h>

int main() {
    int a, b, x, gcd;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Find the minimum of two numbers
    if(a < b) {
        x = a;
    } else {
        x = b;
    }
    // Find the greatest common divisor (GCD)
    for(; x >= 1; x--) {
        if(a % x == 0 && b % x == 0) {
            gcd = x;
            break;
        }
    }

    // Output the GCD
    printf("GCD is :  %d\n", gcd);

    return 0;
}
