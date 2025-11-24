// Reverse a string

#include <stdio.h>

void main(){
    char s[100];
    int i, len = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        len++;

    for(i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    printf("\n");
}