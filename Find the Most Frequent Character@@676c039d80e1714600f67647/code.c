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
    char ch;
    int max=0;
    for (int i = 0; i < n; i++) {
        if (freq[a[i]]) {
          if (freq[a[i]]> max){
            max=freq[a[i]];
            ch=a[i];
          }
            freq[a[i]] = 0;
        }
    }

    return 0;
}
