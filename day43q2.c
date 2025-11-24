// Check if string is palindrome

#include <stdio.h>

void main(){
    char s[100];
    int i, len = 0, f = 1;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        len++;

    for(i = 0; i < len / 2; i++){
        if(s[i] != s[len - i - 1]){
            f = 0;
            break;
        }
    }

    if(f == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
}