#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    
        for (int j='A';j<i;j++){
            printf("%c",j);
      
        }
    }
}