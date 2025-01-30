#include <stdio.h>

void main(){
int size;
scanf("%d",&size);
int arr[size];
int temp[size];
for (int i=0;i<size;i++){scanf("%d",&arr[i]);}
int i=0,zero=0,j=0;
while (arr[i]!='\0'){
if (arr[i]==0){zero++;}
else{temp[j++]=arr[i];}
i++;}
for (int i=0;i<size-zero;i++){
    printf("%d ",temp[i]);
}}
// for (int i=0;i<zero;i++){
//     printf("%d ",0);
// }}
