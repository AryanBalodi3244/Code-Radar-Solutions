#include <stdio.h>


void main(){
    int len,rno[len];
    char name[10][len];
    float marks[len];
    scanf("%d",&len);
 
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