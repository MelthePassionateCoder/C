/* Write a C program that declares three variables of type 'int', assign them values,
    and then output their sum, difference, product and quotient.
*/
#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    float result;
    result=x+y;
    printf("Sum: %d\n",(int)result);
    result=x-y;
    printf("Difference: %d\n", (int)result);
    result=x*y;
    printf("Product: %d\n",(int)result);
    result=(float) x / y;
    printf("Quotient: %.2f\n", result);
}