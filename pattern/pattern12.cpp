 #include <bits/stdc++.h>
using namespace std;
int main(){
      int n=4;
      for(int i =1;i<=n;i++){ 
         //for the numbers 
         for(int j =1;j<=i;j++){ // j values here 1,2,3,4.
              cout<<j<<" ";
          }
         // for the spaces between the numbers
          for(int j =1;j<=2*(n-i);j++){    //j =1,2,3,4
              cout<<"  ";
          }
          //for the numbers on the other side
          for(int j=i;j>0;j--){//j =4,3,2,1
          cout<<j<<" "; 
         }cout<<endl;
      }
     	 return 0;
}
