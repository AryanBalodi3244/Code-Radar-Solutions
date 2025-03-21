#include <stdio.h>
#include <stdlib.h>
void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){scanf("%d",&arr[i]);}
  int first = arr[0];
  int second =999;
  for (int i=0 ; i <size ;i++){
    if (arr[i] < first ){
        second = first;
        first = arr[i];
        
    }
    if (arr[i] < second && arr[i]>first ) second= arr[i];


  }
  printf("%d" , second==999? -1 : second);
}