/*
    Write a C program that takes an integer as input and uses an if-else statement to determine if the number is even or odd.
*/

#include <stdio.h>

int main(){
    int userInput;

    printf("Input a number to determine if it is even or odd: \n");
    scanf("%d", &userInput);
    
    if (userInput!=0){
        if(userInput%2==0){
            printf("The number '%d' you input is even.\n", userInput);
        } else {
            printf("The number '%d' you input is odd.\n", userInput);
        }
    } else {
        printf("0 is not an even or odd number.\n");
    }
}