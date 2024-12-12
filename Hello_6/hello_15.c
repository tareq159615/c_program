// Write a program that accepts an employee's ID, totally worked hours of a month, and the amount he
// received per hour. Print the employee's ID and salary for a particular month.

#include<stdio.h>
int mian (){
    int id, hours, Month_salary, rate;
    printf("Enter your id = ");
    scanf("%d",&id);

    printf("Enter your par hours rat = ");
    scanf("%d",&rate);

    Month_salary = rate * hours;

    printf("Employee's id : %d and har salary : %d",id, Month_salary);

    return 0;
}