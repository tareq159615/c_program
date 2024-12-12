#include<stdio.h>

int main() {
    double x, y, a1, a2, b1, b2, c1, c2;

    printf("a1: ");
    scanf("%lf", &a1);

    printf("a2: ");
    scanf("%lf", &a2);

    printf("b1: ");
    scanf("%lf", &b1);

    printf("b2: ");
    scanf("%lf", &b2);

    printf("c1: ");
    scanf("%lf", &c1);

    printf("c2: ");
    scanf("%lf", &c2);

    if ((a1 * b2 - a2 * b1) == 0) {
        printf("The system of equations is singular, and there is no unique solution.\n");
    } else {
        x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
        y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

        printf("x: %lf, y: %lf\n", x, y);
    }

    return 0;
}
