#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    fgets(a, sizeof(a), stdin);

    int i = 0;
    while (a[i] == ' ') printf("%c", a[i++]);  // Print leading spaces

    char *token = strtok(a, " ");
    while (token) {
        for (int j = strlen(token) - 1; j >= 0; j--) 
            printf("%c", token[j]);  // Print reversed word
        token = strtok(NULL, " ");
        if (token) printf(" ");  // Print spaces between words
    }

    return 0;
}
