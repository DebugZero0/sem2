#include <stdio.h>
#include <limits.h>
#include <stdlib.h>  // For malloc

int* func(int arr[], int n) {
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int *ans = (int *)malloc(2 * sizeof(int));  // Dynamic memory
    ans[0] = min;
    ans[1] = max;
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = func(arr, n);

    printf("Min: %d\n", ptr[0]);
    printf("Max: %d\n", ptr[1]);

    free(ptr);  // Free the dynamically allocated memory
    return 0;
}
