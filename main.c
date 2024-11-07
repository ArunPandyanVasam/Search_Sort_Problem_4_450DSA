#include <stdio.h>

int setMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int setMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(void) {
    //Maximum and minimum of an array using minimum number of comparisons
    int arr[] = {3, 5, 4, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nMin = %d", setMin(arr, n));
    printf("\nMax = %d", setMax(arr, n));
    return 0;
}
