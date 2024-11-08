#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    // Start by setting a flag for checking if a swap was made
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // Flag to detect if a swap happened
        
        // Perform one pass through the array up to n-i-1
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                swapped = 1; // Mark that a swap has been made
            }
        }

        // If no swaps were made, the array is already sorted
        if (!swapped) {
            break; // Early exit, no need to continue sorting
        }
    }
}

int main() {
    int arr[] = {6, 0, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling bubble sort on array arr
    bubbleSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    return 0;
}
