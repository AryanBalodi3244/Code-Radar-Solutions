#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    if (size%2==0){
        printf("%d", (arr[size/2] + arr[size/2 +1])/2);
    }
    else {
        printf("%d", (arr[size/2])/2);
    }
    
    
    }