#include <stdio.h>

int main (){
int n,flag=0;
scanf("%d", &n);
int arr[n];
for (int i=0;i<n;i++){
scanf("%d", &arr[n]);
}
for (int i=0;i<n-1;i++){
if ( arr[i] > arr[i+1]) {flag=1 ;break;}
}
printf("%s", flag==0? "Sorted" : "Not Sorted");


}
#include <stdio.h>

void main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int check=0;
    for (int i=0;i<(size-1);i++){
        if (arr[i] > arr[i+1]){
            check=1;
            break;
        }}
printf("%s",check==0?"Sorted":"Not Sorted");

    }

