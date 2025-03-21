#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    int seen[100]={0};

    for (int i = 0 ; i < size ; i++){
        scanf("%d" , &arr[i]);
        }

    for (int i = 0 ; i < size ; i++){
        if (seen[arr[i]] != 0){
            seen[arr[i]]++;
        }
        else{
            seen[arr[i]]=1;
        }
         
    }
    int maxCount=1;
    int maxCountElem=0;
    
    for (int i = 0 ; i < 100 ; i++){
        int count = seen[i];
        if (count > size/2){
            maxCountElem = i;
        }
        else{
            maxCount=0;
        }
   
        
}
    printf("%d" , maxCount? maxCountElem : -1);
    return 0;
}