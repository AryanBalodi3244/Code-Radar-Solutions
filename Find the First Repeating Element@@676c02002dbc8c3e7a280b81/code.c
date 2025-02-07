#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int flag =0;
        for (int i = 0; i < size; i++) {
             for (int j = i+1; j < size-1; j++) {
                if (arr[i]==arr[j]){
                    printf("%d",arr[i]);
                    flag =1;
                    goto end;
                }
       
    }
    }
    end: 
    if (flag==0){
        printf("%d",-1);
    }
    
    }