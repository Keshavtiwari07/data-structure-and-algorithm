int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here. easy problem
    
    
    for (int i=0;i<n;i++){
        if(arr[i]==num){

            return i;
        }
       
    }
     return -1 ;
}
