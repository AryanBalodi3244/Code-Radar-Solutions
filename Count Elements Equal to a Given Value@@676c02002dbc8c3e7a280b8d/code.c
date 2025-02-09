#include <stdio.h>

void main(){
    int size,target;
    scanf("%d %d", &size, &target);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
 
    int count=0;
        for (int i = 0; i < size; i++) {
        if (arr[i]==target){
            count++;
        }
    }
    printf("%d",count);

    
    }
