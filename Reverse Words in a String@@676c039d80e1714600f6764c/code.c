#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    fgets(a, sizeof(a), stdin);

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') {
            printf(" ");
        } else {
            char c[20];
            int j = 0;

            while (a[i] != ' ' && a[i] != '\0' && a[i] != '\n') {
                c[j++] = a[i++];
            }
            c[j] = '\0';

            for (int k = j - 1; k >= 0; k--) {
                printf("%c", c[k]);
            }

            i--;
        }
    }

    return 0;
}
