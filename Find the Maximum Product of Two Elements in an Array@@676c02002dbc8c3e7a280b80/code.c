#include <stdio.h>

#include <stdlib.h>

void merge(int arr[], int mid , int l , int r){
    int n1= mid-l +1 ;
    int n2= r-mid;
    int larray [n1];
    int rarray [n2];
    for (int i=0;i<n1;i++){
        larray[i]=arr[l+i];

    }
        for (int i=0;i<n2;i++){
        rarray[i]=arr[mid+i+1];

    }
    int i=0,j=0,k=l;
    while (i<n1 && j <n2){
        if (larray[i]<=rarray[j]){
            arr[k]=larray[i];
            i++;
        }
        else{
            arr[k]=rarray[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        arr[k]=larray[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k]=rarray[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[] , int l , int r){
if (l>=r) return;
    int mid =(l+r)/2;
    mergeSort(arr , l , mid);
    mergeSort(arr, mid+1 , r);
    merge(arr, mid ,l , r);

}

void main(){
    int size,c;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr );
    }
    mergeSort(arr, 0, size-1);
   printf("%d",arr[size-1]*arr[size-2]);
    }
