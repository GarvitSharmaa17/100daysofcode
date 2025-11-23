/*Search in a sorted array using binary search.*/

#include <stdio.h>

void main(){
    int n, arr[100], key, low, high, mid, i, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            found = mid;
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found != -1){
        printf("Found at index %d\n", found);
    }
    else{
        printf("-1\n");
    }
}