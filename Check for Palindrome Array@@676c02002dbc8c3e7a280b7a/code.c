#include <stdio.h>

void main(){
    int size,target;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int s=0,end=size-1,flag=0;
    for (int i=0;i<size && s!=end;i++){
        if (arr[s]!=arr[end]){
            printf("NO");
            flag=1;
            break;
        }
        else {
            s+=1;
            end-=1;

        }

    }
if (flag==0){
printf("YES");
}

}