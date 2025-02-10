#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int n=strlen(a);
    int freq[256] = {0}; 
  for (int i = 0; a[i] != '\0'; i++) {
        freq[a[i]]++; 
    }
    char ch;
    int max=0;
    for (int i = 0; i<n; i++) {
          if (freq[i] > max){
            max=freq[a[i]];
            ch=a[i];
          }
        

    }
    printf("%c", ch);

    return 0;
}
