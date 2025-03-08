int printPrimesInRange(int a,int b){


for (int i=a;i<=b;i++){
    if (i==1) continue;
int flag=0;
for (int j=2;j<i;j++){
    if (i%j==0){
       flag =1;
       break;
    }
}
if (flag!=1){
 printf("%d ",i);}

}
if  (flag==1){
    printf("No prime numbers");
}
return 0;

}