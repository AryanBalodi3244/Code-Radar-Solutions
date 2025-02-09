#include <stdio.h>

#include <stdbool.h>
    void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
    int flagi=0;
    int flagd=0;
    for (int i = 0; i < size-1; i++) {
         if (arr[i]=<arr[i+1]){
            flagi=1;
         }
        }
        for (int i = 0; i < size-1; i++) {
         if (arr[i]>=arr[i]){
            flagd=1;
         }
        }
        printf("%s" , (flagi==0 || flagd==0)?"YES":"NO");
    }