// Reverse each word in a sentence

#include <stdio.h>
#include <string.h>

void rev(char s[], int l, int r){
    char t;
    while(l < r){
        t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
}

void main(){
    char s[200];
    int i = 0, start = 0;

    gets(s);
    while(1){
        if(s[i] == ' ' || s[i] == '\0'){
            rev(s, start, i - 1);
            start = i + 1;
            if(s[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s\n", s);
}