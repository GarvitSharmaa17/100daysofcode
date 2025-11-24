// Check if two strings are anagrams

#include <stdio.h>

void main(){
    char s1[100], s2[100];
    int i, j, c1[256] = {0}, c2[256] = {0}, f = 1;

    gets(s1);
    gets(s2);

    for(i = 0; s1[i] != '\0'; i++)
        c1[s1[i]]++;

    for(i = 0; s2[i] != '\0'; i++)
        c2[s2[i]]++;

    for(i = 0; i < 256; i++){
        if(c1[i] != c2[i]){
            f = 0;
            break;
        }
    }

    if(f == 1)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
}