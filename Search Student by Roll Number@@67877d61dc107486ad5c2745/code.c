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
    int find,flag=1;
    scanf("%d",&find);
        for (int i=0;i<len;i++){
            if (rno[i]==find){
                printf("Roll Number: %d, Name: %s, Marks: %.2f",rno[i],name[i],marks[i]);
                flag=0;
                break;
}
    }
    if (flag==1){printf("Student not found");}
}