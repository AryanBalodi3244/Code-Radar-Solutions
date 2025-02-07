#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&target);
    int c;
    for(int i=0;i<size;i++){
   c = target-arr[i];
        for (int j=i+1;j<size-i;j++){
            if (arr[j]==c){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
}