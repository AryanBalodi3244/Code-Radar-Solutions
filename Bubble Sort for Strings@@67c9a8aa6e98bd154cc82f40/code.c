#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bubbleSort(char *arr[], int size) {
    int swapped;
    if (arr == NULL || size <= 0) {
        return -1; // Error checking
    }
    
    for (int i = 0; i < size; i++) {
        swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            // Make sure both strings exist before comparing
            if (arr[j] == NULL || arr[j + 1] == NULL) {
                continue; // Skip NULL entries
            }
            
            if (arr[j][0] > arr[j + 1][0]) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  
            }
        }
        if (!swapped) break;
    }
    return 0;
}

void printArray(char *arr[], int size) {
    if (arr == NULL || size <= 0) {
        return; // Error checking
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] != NULL) {
            printf("%s\n", arr[i]);
        }
    }
}
