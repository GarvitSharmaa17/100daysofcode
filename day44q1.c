// Count spaces, digits, and special characters

#include <stdio.h>

void main(){
    char s[100];
    int i, sp = 0, d = 0, spec = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ')
            sp++;
        else if(s[i] >= '0' && s[i] <= '9')
            d++;
        else if(!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
            spec++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", sp, d, spec);
}