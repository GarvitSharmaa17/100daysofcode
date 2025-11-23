// Check if a matrix is symmetric

#include <stdio.h>

void main(){
    int n, i, j, a[10][10], flag = 1;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}