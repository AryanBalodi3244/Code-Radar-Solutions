void main(){
    int total,tmp,day;
    scanf("%d",&len);
 
    for (int i=0;i<7;i++){
           scanf("%s %d",&day,&tmp);
           total+=tmp;
    }
    printf("%.2f",(float)total/7);
}