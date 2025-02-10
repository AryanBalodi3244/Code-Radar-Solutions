#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = -1; 
    for (int i = size - 1; i >= 0; i--) {
        int temp = arr[i]; 
        arr[i] = maxRight; 
        if (temp > maxRight) {
            maxRight = temp; 
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
