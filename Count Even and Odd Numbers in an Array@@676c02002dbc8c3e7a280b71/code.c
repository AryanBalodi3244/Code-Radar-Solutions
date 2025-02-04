#include <stdio.h>
void main() { 
    int size; 
    scanf("%d", &size); 
    int arr[size]; 
    for (int i = 0; i < size; i++) { 
        scanf("%d", &arr[i]); 
        }
        int odd=0,even=0,i=0;
 for(i=0;i<size;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
 }
        printf("%d %d",even,odd);  }