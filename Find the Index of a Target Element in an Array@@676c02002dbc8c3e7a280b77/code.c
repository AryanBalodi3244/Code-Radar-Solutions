#include <stdio.h>

int binarySearchFirst(int arr[], int l, int r, int target) {
    int result =-1;
    while (l<=r){
        int mid = (l+r)/2;
        if (mid < target){
            l= mid+1
        }
        else if (mid < target) r= mid-1;
        else{
            result = mid;
        }
    }
        return result;
}


int main() {
    int size, target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int k = binarySearchFirst(arr, 0, size - 1, target);
    printf("%d\n", k);  
}
