#include <stdio.h>

#include<stdbool.h>
    void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
    int flagi=0;
    int flagd=0;
    for (int i = 0; i < size; i++) {
         if ((arr[i]>=arr[i+1])==false){
            flagi=1;
         }
        }
        for (int i = 0; i < size; i++) {
         if ((arr[i+1]>=arr[i])==true){
            flagd=1;
         }
        }
        printf("%s" , (flagi==0 || flagd==0)?"YES":"NO");
    }