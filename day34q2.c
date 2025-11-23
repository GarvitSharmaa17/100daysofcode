/*Delete an element from an array.*/

#include <stdio.h>

void main(){
    int n, arr[100], i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);  // position (1-based)

    for(i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    for(i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}