#include <stdio.h>

struct Student {
    int rno;
    char name[10];
    float marks;
};


void main(){
    int len;
    scanf("%d",&len);
    struct Student student[len];
    for (int i=0;i<len;i++){
        scanf("%d %s %f",&student[i].rno,&student[i].name,&student[i].marks);
    }
    int counter=0;
    for (int i=0;i<len;i++){
        if(student[i].marks>50){
            counter++;
        }
                }
    if (counter==len){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }


    
}