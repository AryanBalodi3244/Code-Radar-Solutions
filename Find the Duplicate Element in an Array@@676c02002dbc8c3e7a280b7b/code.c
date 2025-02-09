#include <stdio.h>

  void main(){
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
                   c=arr[j];
                    goto end;
                }
           
        }
        }
end:
    printf("%d",c);    
  }