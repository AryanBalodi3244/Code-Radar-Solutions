#include <stdio.h>

void main(){
    int len,rno;
    char name[10];
    float marks;
    scanf("%d",&len);
 float total=0;
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&rno,&name,&marks);
           total+=marks;
       
    }
    printf("Average Mrks: %.2f",total/len);
}