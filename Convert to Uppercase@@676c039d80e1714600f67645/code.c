#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf("%s",a);
    int i=0;
    while (a[i]){
        a[i]=toupper(a[i]);
        i++;
    }
  printf("%s",a)
    return 0;
    }