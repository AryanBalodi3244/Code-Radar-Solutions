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
    
    printf("-1\n");
    return 0;
    }