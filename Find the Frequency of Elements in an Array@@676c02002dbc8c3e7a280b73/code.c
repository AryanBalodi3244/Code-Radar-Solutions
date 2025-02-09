#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    int seen[100]={0};
    int count=0;
    for (int i = 0; i < size; i++) {scanf("%d", &arr[i]);}
    for (int i = 0; i < size; i++) {
        seen[arr[i]]++;
        }
  for (int i = 0; i < 100; i++) {
        if (seen[i]!=0){
            printf("%d %d\n", i,seen[i])
        }        
        }
    
    return 0;
    }