#include <stdio.h>

void bubbleSort(int arr[],int size){
       for (int i=0;i<size;i++){
         for (int j=0;j<size;j++){
         if (arr[j]>arr[j+1]){
                    arr[j]=arr[j]^arr[j+1];
                     arr[j+1]=arr[j]^arr[j+1];
                      arr[j]=arr[j]^arr[j+1];
                }

         }
       } 
        for (int i=0;i<size;i++){

        printf("%d",arr[i]);
    }
}
void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr[],size);
}