#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    int seen[100]={0};
    int count;
    for (int i = 0; i < size; i++) {scanf("%d", &arr[i]);}
    for (int i = 0; i < size; i++) {
        if seen[arr[i]] count++;
        seen[arr[i]]=1;
        if (count>(size/2)){

              printf("%d\n", arr[i]);
            return 0;
        };


        }
 
     return -1;
    }