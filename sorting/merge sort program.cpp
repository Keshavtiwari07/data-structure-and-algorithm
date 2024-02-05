// merge sort 
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    
   vector<int>vec;
   int  left=low;
   int  right=mid+1;
   
   
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            vec.push_back(arr[left]);
            left++;
            
        }
        else{
            vec.push_back(arr[right]);
            right++;
        }
    }
        
    // Copy the remaining elements from left sub-array
    while (left <= mid) {
        vec.push_back(arr[left]);
        left++;
    }

    // Copy the remaining elements from right sub-array
    while (right <= high) {
        vec.push_back(arr[right]);
        right++;
    }
      // Copy the merged elements back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = vec[i - low];
    }
}

        
    

 
 void mergesort(int arr[],int low,int high){
   int  mid=(low + high)/2;
   if (low>=high){
       return;
   }
   mergesort(arr,low,mid);
    mergesort(arr,mid+1,high); 
    merge(arr,low,mid,high);
    
 }
   int main() {
    int n;
    cin>>n;
    
    
   int arr[n];
   for (int i=0;i<n;i++){
   cin>>arr[i];
   }
   
    mergesort(arr,0,n-1);
   
   for (int i=0;i<n;i++){
   cout<<arr[i];
   }
 
 
 
 
	return 0;
}