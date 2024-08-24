/* Write a C program that calculates a student's grade based on their score.
    The program should take an integer input (0-100) and output the corresponding letter grade:
    A: 90-100
    B: 80-89
    C: 70-79
    D: 60-69
    F: Below 60
    Use constants to define the grade thresholds.
*/

#include <stdio.h>

int main(){
    int score;
    const int GRADE_A = 90;
    const int GRADE_B = 80;
    const int GRADE_C = 70;
    const int GRADE_D = 60;

    printf("Enter the student's grade: \n");
    scanf("%d", &score);

    
    if(score>=GRADE_A && score<=100){
        printf("Grade: A\n");
    }else if(score>=GRADE_B && score<GRADE_A){
        printf("Grade: B\n");
    }else if(score>=GRADE_C && score<GRADE_B){
        printf("Grade: C\n");
    }else if(score>=GRADE_D && score<GRADE_C){
        printf("Grade: D\n");
    }else {
        printf("Grade: F\n");
    }
    
    return 0;
}