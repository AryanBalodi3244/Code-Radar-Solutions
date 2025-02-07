#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < size; i++) {
      
         for (int j = 0; j < size-1; j++) {
                if (arr[j]>arr[j+1]){
                    arr[j]=arr[j]^arr[j+1];
                     arr[j+1]=arr[j]^arr[j+1];
                      arr[j]=arr[j]^arr[j+1];
                }
    }
    }
    
    
    if (size%2==0){
        printf("%d", (arr[size/2 -1] + arr[size/2 +2])/2);
    }
    else {
        printf("%d", (arr[size/2]));
    }
    
    
    }