#include <stdio.h>

void main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int check=0;
    for (int i=0;i<(size-1);i++){
        if (arr[i] < arr[i+1]){
            check=1;
            break;
        }
printf("%s",check?"Sorted":"Not Sorted");

    }

}