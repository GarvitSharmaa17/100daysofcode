// Count characters in a string

#include <stdio.h>

void main(){
    char s[100];
    int i, count = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        count++;

    printf("%d\n", count);
}