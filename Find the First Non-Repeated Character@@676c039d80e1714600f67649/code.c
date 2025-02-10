#include <stdio.h>
#include <string.h>

int main() {
char str[20];
    
    scanf("%s", str);
      int count[256] = {0};

    for (int i = 0; s[i]; i++) 
        count[s[i]]++;

    for (int i = 0; s[i]; i++) {
        if (count[s[i]] == 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}

