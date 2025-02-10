#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[100],b;
    scanf("%[^\n]",a);

    int i=0,j=0;
    while (a[i]!='\0'){
    
        char ch = tolower(a[i]);
        if ( (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
) 
        
        {a[j++]=a[i];}
        i++;}
      
    
    printf("%s",a);
    }