/*Count positive, negative, and zero elements in an array.*/

#include <stdio.h>

int main(){
    int n, i, arr[100], pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] > 0){
            pos++;
        }
        else if(arr[i] < 0){
            neg++;
        }
        else{
            zero++;
        }
    }

    printf("Count of Positive numbers = %d\n", pos);
    printf("Count of Negative numbers = %d\n", neg);
    printf("Count of Zeros = %d\n", zero);

    return 0;
}