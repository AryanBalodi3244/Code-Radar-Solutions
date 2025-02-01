#include <stdio.h>

void main(){
    int a;
   int k=1;
   int rowst=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        
        for (int j=1;j<=i;j++){
            printf("%d ",j==1?rowst:k);
            k=(k==1)?0:1;
           
        }
        rowst=rowst==1?0:1;
        printf("\n");
        
    }
}