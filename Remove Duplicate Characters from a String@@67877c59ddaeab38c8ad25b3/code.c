#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int n=strlen(a);
    int freq[1001] = {0}; 
  for (int i = 0; a[i] != '\0'; i++) {
        freq[a[i]]++; 
    }

    for (int i = 0; i < n; i++) {
        if ((freq[a[i]] > 0)) {
           printf("%c",a[i]);
            
        
            freq[a[i]] = 0;
        }
    }

    return 0;
}
