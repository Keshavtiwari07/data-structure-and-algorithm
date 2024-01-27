#include <iostream>
using namespace std;

int main() {
  int n;
   cin>>n;
   
   
  int arr[n];
  for (int i=0;i<n;i++){
      cin>>arr[i];
  }
  int hashh[8]={0};// largest number in array 8
   for (int i=0;i<n;i++){
     hashh[arr[i]]+=1;
  }
  
  int q;// quaries you want to check
  
  cin>>q;
  
  while(q--){
      int number;
      cin>>number;
      
      cout<< hashh[number]<<endl;
  }
  
	return 0;
}