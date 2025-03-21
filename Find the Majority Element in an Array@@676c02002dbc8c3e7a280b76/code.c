#include <stdio.h>

int main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    int seen[100]={0};

    for (int i = 0 ; i < size ; i++){
        scanf("%d" , &arr[i]);
          seen[arr[i]]++;
        }

   int majorityElem= -1;
    
    for (int i = 0 ; i < 100 ; i++){
        int count = seen[i];
        if (count > size/2){
            majorityElem = i;
            break;
        }
       
   
        
}
    printf("%d" , majorityElem );
    return 0;
}