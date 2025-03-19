#include <stdio.h>

int main(){
    int size , flag=0, elem;
    scanf("%d\n",&size);
    int arr[size];
    for (int i=0;i<size;i++){scanf("%d\n",&arr[i]);}
    for (int i=0 ; i<size-1 && !flag ;i++){
        if(i==0){
            if(arr[i]>arr[i+1]) {
                elem = i;
                flag =1;
            }
        }
        else if(i==size-2){
            if(arr[i]>arr[i-1]) {
                elem = i;
                flag =1;
            }
        }
        else {
            if(arr[i]>arr[i-1] && arr[i] > arr[i+1]) {
                elem = i;
                flag =1;
            }
        }
    }
    if (!flag) {
        printf("-1");
        return 0;
        }
    printf("%d", arr[elem]);
    return 0;
}