#include <stdio.h>

// Function for Linear Search
void linearSearch(int arr[], int n, int target) {
    printf("Performing Linear Search...\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found %d at index %d using Linear Search.\n", target, i);
            return;
        }
    }
    printf("%d not found using Linear Search.\n", target);
}

// Function for Binary Search
void binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1, mid;

    printf("Performing Binary Search...\n");
    while (left <= right) {
        mid = left + (right - left) / 2; // Calculate middle index

        if (arr[mid] == target) {
            printf("Found %d at index %d using Binary Search.\n", target, mid);
            return;
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    printf("%d not found using Binary Search.\n", target);
}

int main() {
    int unsorted_cards[] = {34, 21, 42, 5, 19}; // Unsorted cards for Linear Search
    int sorted_cards[] = {5, 19, 21, 34, 42};   // Sorted cards for Binary Search
    int target = 42;

    int n_unsorted = sizeof(unsorted_cards) / sizeof(unsorted_cards[0]);
    int n_sorted = sizeof(sorted_cards) / sizeof(sorted_cards[0]);

    // Perform Linear Search on unsorted array
    linearSearch(unsorted_cards, n_unsorted, target);

    // Perform Binary Search on sorted array
    binarySearch(sorted_cards, n_sorted, target);

    return 0;
}
