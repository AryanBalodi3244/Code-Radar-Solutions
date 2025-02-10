#include <stdio.h>
#include <string.h>


void main(){
    int len,rno;
    char name[10];
    float marks;
    scanf("%d",&len);
    float max=-99;
    int mrno;
    char mname[10];
    
    
    for (int i=0;i<len;i++){
        scanf("%d %s %f",&rno,&name,&marks);
        if (marks>max){
            max=marks;
            mrno=rno;
            strcpy(mname,name);
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",mrno,mname,max);
}