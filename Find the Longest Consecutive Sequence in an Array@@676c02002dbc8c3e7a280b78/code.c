#include <stdio.h>

int main() {
    int n, arr[1000], longest = 1, curr = 1;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) curr++;
        else curr = 1;
        if (curr > longest) longest = curr;
    }

    printf("%d", longest);
    return 0;
}
