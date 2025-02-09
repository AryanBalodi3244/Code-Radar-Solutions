#include <stdio.h>

void main() {
    int a;
    scanf("%d", &a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=a-i;j++){
        printf(" ");
        }
        for (int j=1;j<=(2*a-i);j++){
        printf("*");
        }
    }
}