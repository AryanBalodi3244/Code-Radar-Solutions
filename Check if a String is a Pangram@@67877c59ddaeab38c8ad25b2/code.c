#include <stdio.h>

#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int n=strlen(a),flag=1;
    for(int i=0;i<n;i++){
        for (char j='a' ;j<='z';j++){
            if (a[i]!=j){
                printf("No");
                flag=0;
                return 0;

            }
        }
    }

if (flag==1){
    printf("Yes");
}
    
    return 0;
}
