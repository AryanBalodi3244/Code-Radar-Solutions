int findOccurrence(int arr[] , int n , int target , char mode){
if (mode=='F')
    for (int i = 0; i<n  ;i++){
        if  (arr[i] == target){
            return i ;
        }
    }

 else if (mode =='L'){
    for(itn i=n;i>0;i-- ){
           if  (arr[i] == target){
            return i ;
        }
    }
 }   
    return -1;

}