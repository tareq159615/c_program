#include<stdio.h>

int main() {
    int i, marks, count;
    int total_marks[40] = {50,60,70,80,90,99,77,88,56,52,64,97,82,88,55,65,55,88,77,45,55,66,55,88,55,65,95,85,71,88,56,56,55,68,99,56,66,55,88,77};

    for(marks = 50; marks <= 100; marks++) {
        count = 0;
        for(i = 0; i <= 40; i++) {
            if(total_marks[i] = marks) {
                count ++;
            }
        }
        printf("Marks: %d\t count: %d\n", marks, count);
    }
    return 0;
}
