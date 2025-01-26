#include <stdio.h>

void main() { 
    int size;
     scanf("%d", &size); 
     int arr[size]; 
     for (int i = 0; i < size; i++){ 
        scanf("%d", &arr[i]); 
      }}
int max=arr[0],min=arr[0];
      for(i=0;i<size;i++){
        if (arr[i]>=max){
max=arr[i]l
        }
        if (arr[i]<=min){
            min=arr[i];
        }
      }
      printf("%d %d",min,max);