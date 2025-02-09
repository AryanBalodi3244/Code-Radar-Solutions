#include <stdio.h>

int isPali(int n){
    int reversed,original=n;
    while (n>0){
        reversed =  reversed*10 + num%10;
        num/=10;
    }
    return reversed==original;
}

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
      for (int i = 0; i < size; i++) {
        if (isPali(arr[i])){
            count++;
        }
    }
printf("%d",count);
}