int printPrimesInRange(int a,int b){
    int flag=0;
for (int i=a;i<b;i++){
for (int j=2;j<i;j++){
    if (i%j==0){
       flag =1;
       break;
    }
}
if  (flag==1)
 printf("%d ",i);

}
return 0;

}