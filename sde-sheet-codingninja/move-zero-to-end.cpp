#include<bits/stdc++.h>
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=0;
    vector<int>vec(n);

    for(int i=0;i<n;i++){
        if (a[i]!=0){
          vec[j] = a[i] ;
          j++;
        }
    }

    return vec;
 
}


