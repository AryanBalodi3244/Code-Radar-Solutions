#include <stdio.h>

int main (){
int n,flag=0;
scanf("%d", &n);
int arr[n];
for (int i=0;i<n;i++){
scanf("%d", &arr[n]);
if(i>0){
    if (arr[i] > arr[i-1]){
flag=1;
    }
}
}
printf("%s", flag? "Sorted" : "Not Sorted");


}