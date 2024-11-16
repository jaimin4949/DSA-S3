#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int isSorted;

    printf("Initial Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        isSorted = 1; // Assume array is sorted at the start of this iteration
        printf("Iteration %d:\n", i + 1);

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0; // Array was not sorted
            }
        }

        // Print the array after each iteration
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");

        // If no swaps were made, array is sorted
        if (isSorted) {
            break;
        }
    }

    printf("Final Sorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int truck_weights[] = {40, 10, 30, 50, 20};
    int n = sizeof(truck_weights) / sizeof(truck_weights[0]);

    bubbleSort(truck_weights, n);

    return 0;
}
