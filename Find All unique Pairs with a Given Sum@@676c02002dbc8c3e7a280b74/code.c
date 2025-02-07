#include <stdio.h>

void main(){
    int size,target,dup=0,temp;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&   arr[i]);
    }
    temp=arr[0];
    int stop=0;
    for (int i = 0; i < size; i++) {
      if (temp==arr[i]){
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
            }
               if (size ==dup){
       stop=1;
       break;
      }
      if (stop==1){break;}
        }
    }
}