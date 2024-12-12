#include <stdio.h>

int main() {
    // Given equations: x + y = 15 and x - y = 5
    
    // Declare variables
    float x, y;
    
    // Solve the system of equations
    // Start by solving the second equation (x - y = 5) for x
    // Then substitute the value of x into the first equation (x + y = 15)
    
    // Solve for x
    x = (5 + 15) / 2.0; // (5 + 15) is the constant term in the second equation, and 2 is the coefficient of x
    
    // Substitute x into the first equation to solve for y
    y = 15 - x;
    
    // Output the results
    printf("The solution for x is: %f\n", x);
    printf("The solution for y is: %f\n", y);

    return 0;
}
