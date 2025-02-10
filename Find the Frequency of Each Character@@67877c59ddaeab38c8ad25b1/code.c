#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    fgets(a, sizeof(a), stdin);
    int n=strlen(a);
    int freq[1001] = {0}; 
  for (int i = 0; a[i] != '\0'; i++) {
        if (a[i]!=' ') 
     {   freq[a[i]]++; }
    }

    for (int i = 0; a[i]!='\0'; i++) {
        if (a[i]==' ' && freq[a[i]]) {
            printf("%c: %d\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }

    return 0;
}
