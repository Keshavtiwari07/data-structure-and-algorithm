#include <bits/stdc++.h>
using namespace std;
	
int main() {
    vector<int>vec1;
    for (auto it:vec1){
        cout<<it<<" ";//empty vector 
    }
    
    vec1.emplace_back(1); //inserting values
    vec1.emplace_back(2);
      vec1.emplace_back(5);
        vec1.emplace_back(10);
          vec1.emplace_back(12);
            vec1.emplace_back(6);
              vec1.emplace_back(7);
     for (auto it:vec1){
        cout<<it<<" ";   // prints value that we inserted 1 2 5 10 12 6 7 
    }
    cout<<endl;
    vec1.pop_back(); // delete a single last element
        
    
     for (auto it:vec1){
        cout<<it<<" "; 
        
    }  // prints value 1 2 5 10 12 6
    cout<<endl;
    
    //size 
    cout<<vec1.size();
    cout<<endl;
    
	return 0;
}