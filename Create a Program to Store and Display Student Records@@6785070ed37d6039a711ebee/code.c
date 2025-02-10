#include <stdio.h>

void main(){
    int len,rno;
    char name[10];
    float marks;
    scanf("%d",&len);
 
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&rno,&name,&marks);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",rno,name,marks);
    }
}