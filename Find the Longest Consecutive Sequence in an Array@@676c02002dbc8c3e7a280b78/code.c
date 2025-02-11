#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size){

    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
                                }
        }
    }

}
void main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,size);
    int longest=0;
    int curr_len=1; 
    for (int i=1;i<size;i++){
        if  (arr[i] ==arr[i-1]+1){
            curr_len++;
        }
        else if(arr[i] !=arr[i-1]) {
            if (curr_len>longest){
                longest=curr_len;
            }
            curr_len=1;
        }
    }
        if (curr_len > longest) {
        longest = curr_len;
    }
    printf("%d", longest);
        
    }