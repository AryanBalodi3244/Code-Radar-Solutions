#include <stdio.h>

void main(){
    int a;
   int k=1;
   int rowst=1;
    scanf("%d",&a);
for (int i=1;i<=a;rowst^=1){
    for (int j=1;j<=i;k=rowst;k^=1){
        printf("%d",k);
    }
    printf("\n");
}
}