/*Write a program to swap the first and last digit of a number.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, first, last, digits, pow10, mid, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = (int)log10(n);
    pow10 = (int)pow(10, digits);

    first = n / pow10;

    mid = n % pow10;
    mid = mid / 10;

    result = (last * pow10) + (mid * 10) + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}