#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 for (int i = 0; i < n; i++) {
     for (int j = i+1; j < n; j++) {
        if (i==n-1){
            printf("%d" , arr[i]);
        }
        else if (arr[j]>arr[i]){
            printf("%d " , arr[j]);
        }
    }
    }
  

    return 0;
}
