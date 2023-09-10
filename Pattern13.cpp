#include <iostream>
using namespace std;

int main() {
	for(int i=0;i<5;i++){ //loop for rows
	    for(char ch='a';ch<='a'+i;ch++){//loop for columns 
	    // for alphabets we use char and write in inverted comas
	    // using right triangle patern using 'a'+4 total = till 'e' 
	        cout<<ch<<" ";
	         }cout<<endl;
	}
	return 0;
}
