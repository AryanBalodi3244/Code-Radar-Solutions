#include <stdio.h>
#include <string.h>

int main() {
char s[20];
    
    scanf("%s", s);
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

