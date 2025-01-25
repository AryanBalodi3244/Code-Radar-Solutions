#include <stdio.h>

bool isPrime(int a){
    if (a==1){
        return false
    }
    for (int i=2;i<a;i++){
        if (a%i==0){
            return false
        }
    }
    return true
}
void main(){
    int b;
    scanf("%d",&b);
    printf("%s",isPrime(b)?"Prime":"Not Prime")
}