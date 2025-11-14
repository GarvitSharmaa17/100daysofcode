/*Write a program to print the product of even numbers from 1 to n.*/

#include <stdio.h>

int main(){
    int n, i;
    long long prod = 1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2){
        prod = prod * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, prod);

    return 0;
}