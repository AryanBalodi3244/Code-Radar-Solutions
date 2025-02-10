#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b[20],c;
    scanf("%s",a);
    scanf("%s",b);

    int i=0,flag=0;
    int j=strlen(a)-1;
    while (a[i]!='\0'){
        if (a[i]!= b[j]){
           printf("NO");
           flag=1;
           break;
        }
        i++;
        j--;
    }
    if(flag==1){printf("YES")}
    }