/*Insert an element in a sorted array at the appropriate position.*/

#include <stdio.h>

void main(){
    int n, arr[100], i, key, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    // find position to insert
    pos = n;
    for(i = 0; i < n; i++){
        if(key < arr[i]){
            pos = i;
            break;
        }
    }

    // shift elements
    for(i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;

    // print new array
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}