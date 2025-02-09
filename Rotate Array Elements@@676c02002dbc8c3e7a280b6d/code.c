#include <stdio.h> 
void main(){ 
    int size, shift; 
    scanf("%d", &size); 
    int arr[size]; 
    for (int i=0;i<size;i++){scanf("%d",&arr[i]); } 
    scanf("%d", &shift); 
    int temp[size]; 
    shift =shift%size;
    for (int i=0;i<size;i++){temp[i]=arr[(i + (size - shift))%size];} 
    for (int i=0;i<size;i++){printf("%d\n",temp[i]);} }