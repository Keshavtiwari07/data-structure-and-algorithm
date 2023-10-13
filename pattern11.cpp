#include <bits/stdc++.h>
using namespace std;
int main(){
        int num=1;
         int n=5;
         for ( int i=0;i<n;i++) {//for the 5 number of rows i values here 0,1,2,3,4
        if( 1%2 ==1 ) num=1; //starting digit =1 or 0
        else (num=0); 
     
     	for(int j=0; j<=i; j++) //column starting here in right angled form 
     	{
     	  cout<<num<<" "; 
     	 num=1-num ; // for the change on next digit
     	}
     	cout<<endl;}
     	 
     	 return 0;
}