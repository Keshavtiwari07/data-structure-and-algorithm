vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n,j;
    n=arr.size();
    k=k%n;
    int temp[k];
   //stored
    for (int i=0;i<k;i++){
        temp[i] =arr[i];
    }
    //shift to left 
   for(int i=k;i<n;i++) {
       arr[i-k]=arr[i];
   }
   // shift to right 
  for(int i=n-k;i<n;i++){
      arr[i]=temp[i-(n-k)];// arr[n-k]=temp[0]; 
                           // arr[n-k+1]=temp[n-k+1-(n-k)]
                           // arr[n-k+1]=temp[1]
  }
   return arr;
}