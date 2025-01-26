#include <stdio.h>

int main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<(size-1);i++){
        if (arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            return arr[i];
        }

    }
    return -1;
}