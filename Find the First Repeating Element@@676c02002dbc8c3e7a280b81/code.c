#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int flag=0;
    for (int i=0 ; i<size;i++){
        for (int j=i+1 ; j<size ;j++){
            if (arr[i]==arr[j]){
                printf("%d" , arr[i]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
    }