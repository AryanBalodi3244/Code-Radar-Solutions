#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int dsum=0;
    for (int i=0;i<size;i++){
         int dsum=0;
        while (arr[i]>0){
            c=arr[i]%10;
            dsum+=c;
            arr[i]/=10;
        }
        printf("%d ",dsum);
    }
    
    }