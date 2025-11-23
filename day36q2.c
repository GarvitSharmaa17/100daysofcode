// Find the sum of all elements in a matrix

#include <stdio.h>

void main(){
    int r, c, i, j, a[10][10], sum = 0;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d\n", sum);
}