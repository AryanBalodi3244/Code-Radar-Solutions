#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b[20],c;
    scanf("%s",a);
    scanf("%s",b);

    int flag=0;
    int l1=strlen(a);
    int l2=strlen(b);
    for (int i=0;i<l1;i++){
        for (int j=0; j<l2;j++){
            if (a[i]==b[j]){
                flag++;
                break;
            }
        }
    }
    if(flag==l1){printf("YES");}
    else {printf("NO");}
    }