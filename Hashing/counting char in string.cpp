#include <iostream>
using namespace std;
 int hashh[256];// asc key use
int main() {
   string st;
   cin>>st;
    
    int n;
    cin>>n;
   
   for (int i=0;i<n;i++){
       hashh[st[i]]+=1;
       
   }
   
   int q;// number of quaries
   cin>>q;
   
   while(q--){
       char c;
       cin>>c;
       cout<< hashh[c]<<endl;
       
   }
   
   
	return 0;
}