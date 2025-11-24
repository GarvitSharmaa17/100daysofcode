// Print all substrings of a string

#include <stdio.h>

void main(){
    char s[100], sub[100];
    int i, j, k;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        for(j = i; s[j] != '\0'; j++){
            for(k = i; k <= j; k++)
                printf("%c", s[k]);
            if(!(s[j+1]=='\0' && i==j))
                printf(",");
        }
    }
    printf("\n");
}