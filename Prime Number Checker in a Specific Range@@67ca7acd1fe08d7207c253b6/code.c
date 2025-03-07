int prinrtPrimeInRange(int a,int b){
for (int i=a;i<b;i++){
for (int j=2;j<i;i++){
    if (j%i==0){
       break;
    }
}
 printf("%d",i);

}
return 0;

}