#include <stdio.h>


    void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; i++) {
            int max=arr[i];
            for (int j = i+1; j < size; j++) {
                if (arr[j]>arr[i]){
                    max=arr[j];
                }
        }
              arr[i]=max;       
              if (arr[size-1]) arr[i]=-1;
         }
for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }