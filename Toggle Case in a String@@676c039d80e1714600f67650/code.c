
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char a[50];
    scanf("%[^\n]",&a);
    int i =0;
    while (a!='\0'){
        if (isupper(a[i])){
            a[i]=tolower(a[i]);

        }
        i++;
    }
    return 0;
}