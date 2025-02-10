#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size], res[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = -991;
    for (int i = 0; i < size; i++) {
 
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i+1]) {
                max = arr[j];  
            }
        }
        res[i] = max;
        max=-999;
    }
res[size-1]=-1;
    for (int i = 0; i < size; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
