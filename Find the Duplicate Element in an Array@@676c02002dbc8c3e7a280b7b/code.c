#include <stdio.h>

  int main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        int c;
        for (int i = 0; i < size; i++) {
             for (int j = i+1; j < size; j++) {
                if (arr[j]==arr[i]){
                   printf("%d" , arr[i])
return 0;
                }
           
        }
        }
return 0;   
  }