#include <stdio.h> 
void main(){ 
    int size, shift; 
    scanf("%d", &size); 
    int arr[size]; 
    for (int i=0;i<size;i++){scanf("%d",&arr[i]); } 
    scanf("%d", &shift); 
    int temp[size]; 
    for (int i=0;i<shift;i++){temp[i]=arr[i+shift+1];} 
    for (int i=0;i<size-shift;i++){temp[i+shift]=arr[i];} 
    for (int i=0;i<size;i++){printf("%d\n",temp[i]);} }