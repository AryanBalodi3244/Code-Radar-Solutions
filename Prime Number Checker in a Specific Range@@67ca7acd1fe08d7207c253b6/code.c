int printPrimesInRange(int a,int b){

int count =0;
for (int i=a;i<=b;i++){
    if (i==1) continue;
int flag=0;
for (int j=2;j<i;j++){
    if (i%j==0){
       flag =1;
       count++;
       break;
    }
}
if (flag!=1){
 printf("%d ",i);}

}
if (count ==(b-a)){
    printf("No prime numbers");
}
return 0;

}