#include <stdio.h>

int main(){
    int size,target,dup=0,temp;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&   arr[i]);
    }
    scanf("%d" , &target);
    for (int i = 0; i < size; i++){
         for (int j = i+1; j < size; j++){
            if ( arr[i]+ arr[j]==target){
                printf("%d %d" , arr[i], arr[j])
            }
    }
    }
    return 0;
}