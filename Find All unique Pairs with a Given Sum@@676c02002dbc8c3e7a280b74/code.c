#include <stdio.h>

int main(){
    int size,target,dup=0,temp;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    int seen[200]={0};
    scanf("%d" , &target);
    for (int i = 0; i < size; i++){
         for (int j = i+1; j < size; j++){
            if ( arr[i]+ arr[j]==target && (seen[arr[i]]==0 && seen[arr[j]]==0)){
                seen[arr[i]] = 1;
                seen[arr[j]]=1;
                printf("%d %d\n" , arr[i], arr[j]);
                break;
            }
    }
    }
    return 0;
}