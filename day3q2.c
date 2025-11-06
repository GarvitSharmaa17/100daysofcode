// write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
    int n1, n2, t;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    t = n1;
    n1 = n2;
    n2 = t;

    printf("After swapping:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);

    return 0;
}