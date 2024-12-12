// #include<stdio.h>
// int main () {
//     int n, sum;
//     printf("Enter your number: ");
//     scanf("%d", & n);

//     sum = (n*(n + 1))/2;

//     printf("Summation is %d\n", sum);
//     return 0;
// }




// #include<stdio.h>

// int main() {
//     int n, sum;

//     // Get input from the user
//     printf("Enter your number: ");
//     scanf("%d", &n);

//     // Calculate the sum of the first n natural numbers
//     sum = (n * (n + 1)) / 2;

//     // Display the result
//     printf("Summation is %d\n", sum);

//     return 0;
// }


#include<stdio.h>
int main (){
    int i, n, sum;
    printf("Enter your number: ");
    scanf("%d", &n);
    sum = 0 ;
    for( i = 0 ; i<= n ; i++){
    sum = sum + i;

    }
    printf("Sum is : %d", sum);
}
