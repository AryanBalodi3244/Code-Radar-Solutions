#include <stdio.h>
#include <stdlib.h>
void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
int c;
for (int i=0 ; i< size ; i++){
    int sum=0;
    while (arr[i]>0){
        if (arr[i]<0) arr[i] = arr[i]*-1;
        sum+=arr[i]%10;
        arr[i]/=10;
    }
    arr[i]= sum;
}
for (int i=0 ; i< size ; i++){
printf("%d " , arr[i]);
}

    

    }