#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
    char a[20],b[20],c;
    scanf("%s",a);
    scanf("%s",b);
    int firstIndex; 
    for(int i=0 ; i<strlen(b) ; i++){
        if ( b[i] == a[0]) {
            firstIndex = i ; 
            break;
        }
    }
    for(int i=0 ; i<strlen(a) ; i++){
        if (a[i]!= b[(i+firstIndex)%(strlen(b))]){
            print("No");
            return 0; 
        }
    }
    print("Yes");
    return 0;
}

