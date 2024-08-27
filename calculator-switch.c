/*
    Write a C program that acts as simple calculator.
    It should take two integers and a character (operator) as input and use a switch case to perform the corresponding operation(+,-,*,/).
*/

#include <stdio.h>

int main(){
    int num1, num2;
    float quotient;
    char choice;
    
    //Prompt the user to choose and input one to perform
    printf("Type the operator to perform(+,-,/,*): \n");
    scanf(" %c", &choice);

    //Prompt the user to enter the first number
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    //Prompt the user to enter the second number
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    
    //Switch case to handle the operation
    switch (choice){
        case '+':
            printf("%d + %d is %d\n",num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d is %d\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%d * %d is %d\n", num1, num2, num1*num2);
            break;
        case '/':
            if(num2 != 0) {
                quotient = (float) num1 / num2;
                printf("%d / %d is %.2f\n", num1, num2, quotient);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Please input only from the given choices.\n");
    }
    return 0;
}