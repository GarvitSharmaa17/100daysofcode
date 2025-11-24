// Check if one string is rotation of another

#include <stdio.h>
#include <string.h>

void main(){
    char s1[100], s2[100], temp[200];

    gets(s1);
    gets(s2);

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
}