#include <stdio.h>

int isPali(int n){
    int reversed=0,original=n;
    while (n>0){
        reversed =  reversed*10 + n%10;
        n/=10;
    }
    return reversed==original;
}

void main(){
    int size,target;
    scanf("%d", &size);
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (isPali(arr[i])){
            count++;
        }
    }

  
    printf("%d",count);
}