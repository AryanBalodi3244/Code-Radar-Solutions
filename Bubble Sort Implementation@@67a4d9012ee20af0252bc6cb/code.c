#include <stdio.h>

void bubbleSort(int arr[],int size){
       for (int i=0;i<size;i++){
         for (int j=0;j<size-1;j++){
         if (arr[j]>arr[j+1]){
                    arr[j]=arr[j]^arr[j+1];
                     arr[j+1]=arr[j]^arr[j+1];
                      arr[j]=arr[j]^arr[j+1];
                }

         }
       } 
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr[],size);
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}