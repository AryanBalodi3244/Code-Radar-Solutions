#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf("%[^\n]" , &a);
  
    for(int i=strlen(a)-1 ; i>=0;i--){
        printf("%c" , a[i]);
    }
    return 0;
    }