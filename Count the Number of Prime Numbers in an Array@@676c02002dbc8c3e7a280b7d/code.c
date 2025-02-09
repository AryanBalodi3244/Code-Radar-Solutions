#include <stdio.h>
#include <stdbool.h>
bool isPrime(int a){
    if (a==1){
        return false;
    }
    for (int i=2;i<a;i++){
        if (a%i==0){
            return false;
        }
    }
    return true;
}
void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
     for (int i = 0; i < size; i++) {
        count+= isPrime(arr[i])?1:0;
    }
    printf("%d",count);

}