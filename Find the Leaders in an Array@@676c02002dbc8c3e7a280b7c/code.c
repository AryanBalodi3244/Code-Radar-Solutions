#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int result[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 for (int i = 0; i < n; i++) {
     for (int j = i+1; j < n; j++) {
        if (arr[j]>arr[i]){
            printf("%d " , arr[j]);
        }
    }
    }

    return 0;
}
