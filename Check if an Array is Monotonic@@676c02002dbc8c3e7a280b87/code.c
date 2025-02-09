#include <stdio.h>

#include <stdbool.h>
    void main(){
        int size,target;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

    int increasing = 1, decreasing = 1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            decreasing = 0;  
        } 
        else if (arr[i] > arr[i + 1]) {
            increasing = 0;  
        }
    }

    printf("%s\n", (increasing || decreasing) ? "YES" : "NO");
    
    }