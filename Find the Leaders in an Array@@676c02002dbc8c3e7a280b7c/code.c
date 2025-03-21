#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 for (int i = 0; i < n; i++) {
     if (i==n-1){
            printf("%d" , arr[i]);
            break;
        }
     for (int j = i+1; j < n; j++) {
       
        if (arr[j]>arr[i+1]){
            printf("%d " , arr[j]);
            break;
        }
    }
    }
  

    return 0;
}
