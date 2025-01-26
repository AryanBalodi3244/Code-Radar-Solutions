#include <stdio.h>
int main(){
    int sums=0;
    int a;
    scanf("%d",&a);
    for (int i =1;i<(a+1);i++){
        sums+=i;
    }
    printf("%d",sums);
    return 0;
}