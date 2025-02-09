#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i>=0;i--){
    
        for (char j='A'; j<'A'+ i;j++){
            printf("%C ",j);
        }
        printf("\n");
    }
}