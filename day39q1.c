// Check if the diagonal elements are distinct

#include <stdio.h>

void main(){
    int n, i, j, a[10][10], d[10], k = 0, flag = 1;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        d[k++] = a[i][i];
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(d[i] == d[j]){
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("True\n");
    else
        printf("False\n");
}