// Toggle case of each character

#include <stdio.h>

void main(){
    char s[100];
    int i;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("%s\n", s);
}