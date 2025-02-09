#include <stdio.h>

void binarySearch(int arr[], int l , int r , int target){
    while (l<=r){
        int mid = (l+r)/2;
        if  (arr[mid] !=target){
            if (arr[mid]>target){
                r=mid;
            }else{
                l=mid;
            }
        }
        else {
            return mid;
       
        }
    }
    return -1;

}
void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
    }
    scanf("%d",&target);
    binarySearch(arr,0 , size-1, target);
}
