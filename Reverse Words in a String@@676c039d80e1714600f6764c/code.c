#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    fgets(a, sizeof(a), stdin);

    for (int i=0 ; i<strlen(a); i++){
        if (a[i]==' ') printf(" ");
       else{
         char c[20];
         int j=0;
        while( a[i]!=" " && a[i] != '\0'){
            c[j++] = a[i];
        }
        for (int i=strlen(c)-1; i>=0 ;i--){
            printf("%c" , c[i]);
        }
       }

    }
    return 0;
}
