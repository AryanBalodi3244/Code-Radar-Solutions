#include <stdio.h>

void main(){
    int len,name,rno;
    float marks;
    scanf("%d\n",&len);
    scanf("%d %s %f",&rno,&name,&marks);
    for (int i=0;i<len;i++){
        printf("%Roll Number: %d, Name: %s, Marks: %f",rno,name,marks);
    }
}