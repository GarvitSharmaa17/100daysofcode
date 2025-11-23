// Rotate an array to the right by k positions

#include <stdio.h>

void main(){
    int n, k, arr[100], i, j, temp[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;  // handle cases where k > n

    for(i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];
    }

    for(i = 0; i < n; i++){
        printf("%d ", temp[i]);
    }

    printf("\n");
}