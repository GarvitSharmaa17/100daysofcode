// Print initials with surname in full

#include <stdio.h>

void main(){
    char s[100];
    int i, last;

    gets(s);

    printf("%c.", s[0]);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ' && s[i + 1] != '\0'){
            if(s[i + 1] != '\0')
                printf("%c.", s[i + 1]);
            last = i + 1;
        }
    }

    printf("%s\n", &s[last]);
}