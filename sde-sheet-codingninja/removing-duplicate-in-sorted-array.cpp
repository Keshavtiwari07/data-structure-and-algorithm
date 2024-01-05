int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j=0;

	int ans ;
	for (int i=0;i<n;i++){

          if (arr[i] != arr[i+1]) {
            arr[i] = arr[j];
           j++; 
		   }
        
		  ans=j;

		  }
        

        return ans;
}