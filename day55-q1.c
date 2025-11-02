// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int arr[100], n;

    scanf("%d", &n);  // Input array size
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", findMajorityElement(arr, n));
    return 0;
}