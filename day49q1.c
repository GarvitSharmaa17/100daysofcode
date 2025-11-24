// Print initials of a name

#include <stdio.h>

void main(){
    char s[100];
    int i;

    gets(s);

    printf("%c.", s[0]);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ')
            printf("%c.", s[i + 1]);
    }

    printf("\n");
}