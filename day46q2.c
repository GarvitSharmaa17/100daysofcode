// Find first repeating lowercase alphabet

#include <stdio.h>

void main(){
    char s[100];
    int i, j, f = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        for(j = i + 1; s[j] != '\0'; j++){
            if(s[i] == s[j]){
                printf("%c\n", s[i]);
                f = 1;
                break;
            }
        }
        if(f == 1)
            break;
    }
}