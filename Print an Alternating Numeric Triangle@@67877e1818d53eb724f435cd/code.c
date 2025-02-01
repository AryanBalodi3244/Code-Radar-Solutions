#include <stdio.h>

void main(){
    int a;
   int rowst=1;
    scanf("%d",&a);
for (int i=1;i<=a;i++,rowst^=1){
    for (int j=1,k=rowst;j<=i;j++,k^=1){
        printf("%d ",k);
    }
    printf("\n");
}
}