#include <stdio.h>

void main(){
    int size,target,dup=0,temp;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {

        scanf("%d",&temp);
        arr[i]=temp;
        if (temp == arr[0]){
            dup++;
        }

    }
    scanf("%d",&target);
    int c;
    for(int i=0;i<size;i++){
   c = target-arr[i];
        for (int j=i+1;j<size;j++){
            if (arr[j]==c){
                printf("%d %d\n",arr[i],arr[j]);
                if ( dup==size){
                    break;
                }
            }
        }
    }
}