#include <stdio.h>

  void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        }
        int el=-999;
        
        for (int i = 0; i < size; i++) {
                if (arr[i]%2==0 && arr[i]>el){
                    el=arr[i];
                }
        }
        printf("%d",el==-999?-1:el);
  }