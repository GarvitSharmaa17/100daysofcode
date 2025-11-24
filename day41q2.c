// Print each character on a new line

#include <stdio.h>

void main(){
    char s[100];
    int i;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);
}