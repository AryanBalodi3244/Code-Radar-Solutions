#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int areRotations(char* s1, char* s2) {
  
    int len = strlen(s1);
    char* concat = (char*)malloc(2 * len + 1);
    strcpy(concat, s1);
    strcat(concat, s1);

    int result = strstr(concat, s2) != NULL;
    free(concat);
    return result;
}
int main(){
    char a[20],b[20],c;
    scanf("%s",a);
    scanf("%s",b);
    printf("%s",areRotations(a,b)? "Yes":"No");
}

