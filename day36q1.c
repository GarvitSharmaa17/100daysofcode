// Read and print a matrix

#include <stdio.h>

void main(){
    int r, c, i, j, a[10][10];

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}