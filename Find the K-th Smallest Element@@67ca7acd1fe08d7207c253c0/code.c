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
int kthSmallest(int arr[] , int n , int k ){
    bubbleSort(arr , n );
    if (k>n){
        return -1;
    }
    return arr[k-1];
}