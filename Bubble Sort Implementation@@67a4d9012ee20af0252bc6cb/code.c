#include <stdio.h>

void bubbleSort(int arr[],int size){
    int swapped;
       for (int i=0;i<size;i++){
        swapped = 0;
         for (int j=0;j<size-i-1;j++){
       
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  
            }
        }
        if (!swapped) break; 
       } 
}
void printArray(int arr[],int size){
        for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    printArray(arr,size);
    return 0;
}