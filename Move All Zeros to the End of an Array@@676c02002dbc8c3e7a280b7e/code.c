#include <stdio.h>

void main(){
int size;
scanf("%d",&size);
int arr[size];
int temp[size];
for (int i=0;i<size;i++){scanf("%d",&arr[i]);}

int j =0 , count=0;
 for(int i=0;i<size ; i++){
    if(arr[i]!=0){
        temp[j++] = arr[i];

    }
    else{
        count++;
    }
 }
  for(int i=0;i<count ; i++){
temp[j++] = 0;
 }
   for(int i=0;i<j ; i++){
printf("%d " , temp[i]);

 }

}


