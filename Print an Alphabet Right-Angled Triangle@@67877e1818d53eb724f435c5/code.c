#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    
        for (char j='A';j<i;++j){
            printf("%c",j);
      
        }
    }
}