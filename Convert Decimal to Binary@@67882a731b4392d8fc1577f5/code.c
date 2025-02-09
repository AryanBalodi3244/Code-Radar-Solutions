#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i = 31; i >= 0; i--)  
    if ((n >> i) & 1) {flag = 1;}
    if (flag) {printf("%d", (n >> i) & 1);  }

}