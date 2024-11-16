#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;

    printf("Initial Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion Sort Algorithm
    for (i = 1; i < n; i++) {
        key = arr[i]; // Element to be inserted into the sorted portion
        j = i - 1;

        // Shift elements of the sorted portion to the right to make space
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Place the key in its correct position

        // Print the array after each step
        printf("Step %d:\n", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
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
    int arr[] = {2021, 2019, 2020, 2018, 2022};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    return 0;
}
