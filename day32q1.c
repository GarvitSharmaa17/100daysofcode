/*Merge two arrays.*/

#include <stdio.h>

void main(){
    int n1, n2, i, arr1[100], arr2[100], merge[200];

    scanf("%d", &n1);
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
        merge[n1 + i] = arr2[i];
    }

    for(i = 0; i < n1 + n2; i++){
        printf("%d ", merge[i]);
    }
}