/*Insert an element in an array at a given position.*/

#include <stdio.h>

void main(){
    int n, arr[100], i, pos, key;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &key);  // position (1-based) and element to insert

    // shift elements
    for(i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = key;  // insert at given position

    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}