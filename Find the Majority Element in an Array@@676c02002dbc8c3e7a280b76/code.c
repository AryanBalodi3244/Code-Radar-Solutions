#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    int seen[100]={0};
    for (int i = 0 ; i < size ; i++){
        if (seen[arr[i]] != 0){
            seen[arr[i]]++;
        }
        else{
            seen[arr[i]]=1;
        }
         
    }
    int maxCount=0;
    for (int i = 0 ; i < 100 ; i++){
        int count = seen[i];
        if (count>maxCount){
            maxCount=count;
        }
        
}
printf("%d" , maxCount);
return 0;
}