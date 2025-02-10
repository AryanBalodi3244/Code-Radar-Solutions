#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *word) {
    int start = 0;
    int end = strlen(word) - 1;
    
    while (start < end) {
        if (tolower(word[start]) != tolower(word[end])) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char input[1000];
    char words[100][100];
    int count = 0;
    
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; 
    
    char *token = strtok(input, " ");
    while (token && count < 100) {
        strcpy(words[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }
    
    for (int i = 0; i < count; i++) {
        if (!is_palindrome(words[i])) {
            printf("No\n");
            return 0;
        }
    }
    
    printf("Yes\n");
    return 0;
}