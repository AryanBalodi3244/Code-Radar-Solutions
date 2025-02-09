#include <stdio.h>

  void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; i++) {
             for (int j = i; j < size; j++) {
                if (arr[j]==arr[i]){
                    printf("%d",arr[j]);
                    break;
                }
           
        }
        }
  }