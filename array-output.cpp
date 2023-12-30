#include <bits/stdc++.h>
using namespace std;
	
int main() {
    array<int,5>arr={1,2,3,4,9};
    for(auto it:arr){ 
        cout<<it<<" "; // prints 1,2,3,4,5
    }
    cout<<endl;
    cout<<arr.size()<<endl;// to know the size of array
    
    cout<<arr.front()<<endl; // to know the value of first element
    // alternative method to know the value of first element
    cout<<arr.at(0)<<endl ;// element at 0 index 
    
    cout<<arr.back()<<endl;// to know the value of last element
     // alternative method to know the value of last element
     cout<<arr.at(arr.size()-1)<<endl;//arr (last index-1)
   
	return 0;
}