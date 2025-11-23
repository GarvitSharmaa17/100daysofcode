// Find the sum of each row of a matrix and store it in an array

#include <stdio.h>

void main(){
    int r, c, i, j, a[10][10], sum[10];

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        sum[i] = 0;
        for(j = 0; j < c; j++){
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(i = 0; i < r; i++){
        printf("%d ", sum[i]);
    }

    printf("\n");
}