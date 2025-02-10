#include <stdio.h>


void main(){
    int len;
    scanf("%d",&len);
    int rno[len];
    char name[len][10];
    float marks[len];
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&rno[i],&name[i],&marks[i]);
    }
    float find;
    int count=0;
    scanf("%f",&find);
        for (int i=0;i<len;i++){
            if (marks[i]>find){
               count++;
}
    }
    printf("Count of students scoring above %.2f: %d",find,count);
}