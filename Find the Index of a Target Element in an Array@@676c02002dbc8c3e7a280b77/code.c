#include <stdio.h>

int binarySearch(int arr[], int l , int r , int target){
    while (l<r){
        mid = (l+r)/2;
        if  (arr[mid] !=target){
            if (arr[mid]>target){
                l=mid;
            }else{
                r=mid;
            }
        }
        else {
            return mid;
        }
    }
}
void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
    }
    scanf("%d",&target);
    binarySearch(arr,0 , size-1, target );
    return 0;}
