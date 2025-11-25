#include <stdio.h>

void main(){
    char s[100];

    gets(s);

    printf("Hello, World!\n");
    printf("%s\n", s);
}