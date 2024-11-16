#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    printf("Initial Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the first unsorted element is the smallest

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the smallest element
            }
        }

        // Swap the smallest element with the first unsorted element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Print the array after each step
        printf("Step %d:\n", i + 1);
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    printf("Sorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    return 0;
}
