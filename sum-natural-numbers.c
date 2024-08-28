/*
    Write a C program that takes an integer 'n' as input and uses a while loop to calculate the sum of all natural numbers up to n.
*/

#include <stdio.h>

int main(){
    int userNumber,sum;
    int i=0;

    //Prompt the user to input a number
    printf("Enter a number to print its sum of all natural numbers: ");
    scanf("%d", &userNumber);

    //Loop to perform the addition of all natural numbers up to the number input by the user
    while(i<=userNumber) {
        sum += i;
        ++i;
    }

    //Output the sum of all natural numbers
    printf("Sum: %d", sum);
    
    return 0;
}