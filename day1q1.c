// write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    int a, b, s;
    printf("Enter a number: ");
    scanf("%D", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    s = a + b;
    printf("Sum = %d\n", s);

    return 0;
}