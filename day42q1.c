// Count vowels and consonants

#include <stdio.h>

void main(){
    char s[100];
    int i, v = 0, c = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                v++;
            else
                c++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", v, c);
}