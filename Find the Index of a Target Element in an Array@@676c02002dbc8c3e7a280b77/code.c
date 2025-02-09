#include <stdio.h>

int binarySearch(int arr[], int l , int r , int target){
    while (l<=r){
        int mid = (l+r)/2;
        if  (arr[mid] !=target){
            if (arr[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        else {
            return mid;
            break;
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
    int k =binarySearch(arr,0 , size-1, target);
    printf("%d",k);
}
