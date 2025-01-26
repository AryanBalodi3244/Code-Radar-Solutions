#include <stdio.h>
int main(){
    int sums=0
    int a;
    scanf("%d",&a);
    for (int i =0;i<a+1;i++){
        sums+=i;
    }
    return sums;
}