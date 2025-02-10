
#include <stdio.h>
int main(){
    char a[];
    scanf("%s",&a);
    int i =0;
    while (a!='\0'){
        if (isupper(a[i])){
            a[i]=tolower(a[i]);

        }
        i++;
    }
    return 0;
}