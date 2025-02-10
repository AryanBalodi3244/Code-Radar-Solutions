#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf("%[^\n]",a);
    int minc=0,count=0;
    int size= strlen(a);
    int s=0,end=size-1,flag=0;
    for (int i=0;i<size && s!=end;i++){
        if (a[s]!=a[end]){
            printf("No");
            flag=1;
            break;
        }
        else {
            s+=1;
            end-=1;

        }

    }
if (flag==0){
printf("Yes");
}
    }