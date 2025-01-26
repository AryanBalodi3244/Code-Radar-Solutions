#include <stdio.h>

void main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    for (int i=0;i<size;i++){scanf("%d\n",&arr[i]);}
    int check=0;
    for(int i=0;i<(size-1);i++){
        if (arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            check=1;
            break;
        } }
    if(check==0){printf(-1);}
}