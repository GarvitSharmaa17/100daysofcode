// Find longest word in a sentence

#include <stdio.h>
#include <string.h>

void main(){
    char s[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    gets(s);

    while(1){
        if(s[i] == ' ' || s[i] == '\0'){
            word[j] = '\0';
            if(strlen(word) > max){
                max = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
            if(s[i] == '\0')
                break;
        } else {
            word[j++] = s[i];
        }
        i++;
    }

    printf("%s\n", longest);
}