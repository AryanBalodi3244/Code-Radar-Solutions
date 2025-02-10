#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size], res[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        int max = -999; 
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                max = arr[j];
                break; 
            }
        }
        res[i] = max;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
