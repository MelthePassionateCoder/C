/* Write a C program that takes two integers as input from the user. 
    Perform addition, subtraction, multiplication, division and modulus operations on
    two numbers.
    Print the results of each operation.
*/
#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;

    printf("Enter a first number: \n");
    scanf("%d", &num1);
    printf("Enter a second number: \n");
    scanf("%d", &num2);

    printf("Sum: %d\n", num1+num2);
    printf("Difference: %d\n", num1-num2);
    printf("Product: %d\n", num1*num2);
    
    if (num2!=0){
        quotient = (float) num1 / num2;
        printf("Quotient: %.2f\n", quotient);
        printf("Modulo: %d", num1%num2);
    } else {
        printf("Can't divide zero.");
    }
    
    
    return 0;

}