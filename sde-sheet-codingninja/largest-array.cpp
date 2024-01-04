#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int>&vec, int n) {
    // Write your code here.

   int largest=vec[0];
   for(int i=0;i<n;i++){

     if (vec[i] > largest) {

       largest = vec[i];
     }
   }
   return largest;
}
