#include<stdio.h>
int main (){ 
    int i, j; 
    int total_marks [] = {0,1,2,1,3,4};
    int marks_count [11];

    for(i = 0 ; i<11 ; i++){
        marks_count[i] = 0;
     } 
    for(i = 0; i<12; i++){
        marks_count[total_marks[i]]++;

    for(j =0 ; j<5; j++){
        printf("%d",marks_count[i]);
        }
        printf("\n");
     }
     return 0;
} 