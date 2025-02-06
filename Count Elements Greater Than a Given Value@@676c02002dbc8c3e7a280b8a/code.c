#include <stdio.h>



void main() {
    int size,k,count=0;
    scanf("%d %d", &size,&k);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
        for (int i = 0; i < size; i++) {
        if (arr[i]>k){count++;}
    }
    printf("%d",count);
    }


