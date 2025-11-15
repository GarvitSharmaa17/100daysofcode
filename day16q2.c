/*Write a program to check if a number is a palindrome.*/

#include <stdio.h>

int main(){
    int n, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev){
        printf("%d is a Palindrome\n", temp);
    }
    else{
        printf("%d is Not a Palindrome\n", temp);
    }

    return 0;
}