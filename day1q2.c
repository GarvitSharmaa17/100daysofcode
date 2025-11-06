// // write a program to input two numbers and display their sum, difference, product and quotient.

#include <stdio.h>

int main(){
    float n1, n2;

    printf("Enter First number: ");
    scanf("%f", &n2);

    printf("Enter Second number: ");
    scanf("%f", &n2);

    printf("Sum = %.2f\n", n1 + n2);
    printf("Difference = %.2f\n", n1 - n2);
    printf("Product = %.2f\n", n1 * n2);

    if (n2 != 0){
        printf("Quotient = %.2f\n", n1 / n2);
    }
    else{
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}