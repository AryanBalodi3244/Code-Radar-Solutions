#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%s", &a);
    int n=strlen(a);
    int freq[1001] = {0}; 
  for (int i = 0; a[i] != '\0'; i++) {
        if (a[i]!=' ') 
     {   freq[a[i]]++; }
    }

    for (int i = 0; a[i]!='\0'; i++) {
        if (a[i]===' ' && freq[a[i]]) {
            printf("%c: %d\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }

    return 0;
}
