// Replace spaces with hyphens

#include <stdio.h>

void main(){
    char s[100];
    int i;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ')
            s[i] = '-';
    }

    printf("%s\n", s);
}