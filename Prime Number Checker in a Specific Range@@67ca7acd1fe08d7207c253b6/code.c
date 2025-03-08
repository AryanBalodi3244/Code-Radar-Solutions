int printPrimesInRange(int a,int b){

int count =0;
for (int i=a;i<=b;i++){
    
    if (i==1 || i==0 || i<0){ count++; continue;}

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
if (count ==(b-a +1 )){
    printf("No prime numbers");
}
return 0;

}