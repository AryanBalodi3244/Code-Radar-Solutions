#include <stdio.h>

int main() {
    int size;
    int result[100];
    scanf("%d", &size);
    int arr[size], res[size];
    int count=0;
        for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) 
            if (arr[i] < arr[j]) break;
            if (j == n) result[count++] = arr[i];
        }

    for (int i = 0; i < count; i++) printf("%d ", result[i]);   


    return 0;
}
