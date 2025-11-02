// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main(){
    int n, i, k;
    long long sum = 0, max;
    int a[1000];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    sum = 0;
    for(i = 0; i < k; i++)
        sum += a[i];

    max = sum;

    for(i = k; i < n; i++){
        sum = sum + a[i] - a[i - k];
        if(sum > max) max = sum;
    }

    printf("%lld\n", max);
    return 0;
}