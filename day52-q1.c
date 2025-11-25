#include <stdio.h>
#include <string.h>

int main(){
    char ch, s[100], sen[200];

    scanf("%c", &ch);
    scanf("%s", s);
    getchar();                 // consume the newline before fgets
    fgets(sen, sizeof(sen), stdin);

    if(sen[strlen(sen) - 1] == '\n')   // remove trailing newline added by fgets
        sen[strlen(sen) - 1] = '\0';

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}