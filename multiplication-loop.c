/*
    Write a C program that takes an integer as input and uses a for loop to print the multiplication table for that number.
*/

#include <stdio.h>

int main(){
    int userNumber,i;
    
    //Prompt the user to input a number
    printf("Input a number to print the multiplication table for the number: \n");
    scanf("%d",&userNumber);

    //For loop to handle the multiplicable table for the number
    for(i=1;i<=10;i++){
        printf("%d * %d= %d\n",userNumber, i, userNumber*i);
    }
    return 0;
}