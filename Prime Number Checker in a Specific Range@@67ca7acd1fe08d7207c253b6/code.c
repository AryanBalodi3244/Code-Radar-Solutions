int printPrimesInRange(int a,int b){
for (int i=a;i<b;i++){
for (int j=2;j<i;j++){
    if (j%i !=0){
 printf("%d ",i);
 break;
    }
}

}
return 0;

}