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
        int k= arr[i]%10;
        if (k<0)  k*=-1;
        sum+=k;
        arr[i]/=10;
    }
    arr[i]= sum;
}
for (int i=0 ; i< size ; i++){
printf("%d " , arr[i]);
}

    

    }