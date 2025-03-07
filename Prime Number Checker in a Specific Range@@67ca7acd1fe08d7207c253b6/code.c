int prinrtPrimeInRange(int a,int b){
for (int i=a;i<b){
for (int j=2;j<i;i++){
    if (j%i==0){
        printf("%d",i);
    }
}

}
return 0;

}