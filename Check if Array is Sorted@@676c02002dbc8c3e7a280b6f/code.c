#include <stdio.h>

int main (){
int n,flag=0;
scanf("%d", &n);
int arr[n];
for (int i=0;i<n;i++){
scanf("%d", &arr[n]);
}
for (int i=0;i<n-1;i++){
if ( arr[i+1] < arr[i]) flag=1 break;
}
printf("%s", flag? "Not Sorted" : "Sorted");


}
