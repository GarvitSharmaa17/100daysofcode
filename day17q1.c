/*Write a program to check if a number is an Armstrong number.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, temp, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0){
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0){
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if(sum == n){
        printf("%d is an Armstrong Number\n", n);
    }
    else{
        printf("%d is Not an Armstrong Number\n", n);
    }

    return 0;
}