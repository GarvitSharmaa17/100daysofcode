// Sum of main diagonal elements

#include <stdio.h>

void main(){
    int n, i, j, a[10][10], sum = 0;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            if(i == j)
                sum = sum + a[i][j];
        }
    }

    printf("%d\n", sum);
}