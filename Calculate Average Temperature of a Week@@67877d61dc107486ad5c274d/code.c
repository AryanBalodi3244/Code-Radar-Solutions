void main(){
    int total=0,tmp;
    char day[10];

 
    for (int i=0;i<7;i++){
           scanf("%s %d",day,&tmp);
           total+=tmp;
    }
    printf("%.2f",(float)(total/7));
}