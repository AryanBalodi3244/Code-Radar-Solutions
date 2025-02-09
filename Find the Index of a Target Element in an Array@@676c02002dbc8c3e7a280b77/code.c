#include <stdio.h>

int binarySearchFirst(int arr[], int l, int r, int target) {
    int result = -1;  // Initialize result to -1 (not found)
    
    while (l <= r) {
        int mid = (l + r) / 2;
        
        if (arr[mid] == target) {
            result = mid;  // Found the target, store the index
            r = mid - 1;  // Move left to find the first occurrence
        } else if (arr[mid] > target) {
            r = mid - 1;  // Search in the left half
        } else {
            l = mid + 1;  // Search in the right half
        }
    }
    
    return result;  // Return the first occurrence index or -1 if not found
}

int main() {
    int size, target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int k = binarySearchFirst(arr, 0, size - 1, target);
    printf("%d\n", k);  // Print the index of the first occurrence or -1
}
