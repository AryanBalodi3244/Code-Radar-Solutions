#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
 for (int i = 0; i < size; i++) {
   
   for (int j=i+1 ;j<size;j++ ){
    if (arr[i+1]>arr[j+1]) arr[i]=arr[j];
   }
    }
arr[size-1]=-1;
for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
  
    return 0;
}
