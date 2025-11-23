// Diagonal traversal of a matrix

#include <stdio.h>

void main(){
    int n, i, j, a[10][10];

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", a[j][i - j]);
        }
    }

    for(i = 1; i < n; i++){
        for(j = i; j < n; j++){
            printf("%d ", a[j][n + i - j - 1]);
        }
    }
}