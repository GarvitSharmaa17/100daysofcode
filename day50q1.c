// Change date format from dd/mm/yyyy to dd-Mmm-yyyy

#include <stdio.h>

void main(){
    char d[11], m[3], y[5];
    char *mon[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int mi;

    gets(d);

    y[0] = d[6]; y[1] = d[7]; y[2] = d[8]; y[3] = d[9]; y[4] = '\0';
    m[0] = d[3]; m[1] = d[4]; m[2] = '\0';
    mi = (m[0]-'0')*10 + (m[1]-'0');

    printf("%c%c-%s-%s\n", d[0], d[1], mon[mi-1], y);
}