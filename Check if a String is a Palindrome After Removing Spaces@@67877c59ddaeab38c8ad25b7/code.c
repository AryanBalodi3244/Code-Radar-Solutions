#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;  // Remove newline character

    int start = 0, end = strlen(input) - 1;
    
    while (start < end) {
        while (start < end && input[start] == ' ') start++;  
        while (start < end && input[end] == ' ') end--;  

        if (tolower(input[start]) != tolower(input[end])) {
            printf("No\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Yes\n");
    return 0;
}
