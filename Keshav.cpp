#include <iostream>
using namespace std;

int main() {
	int start;
	for (int i=1;i<=5;i++){
	    if (i%2==1){
	        start=1;
	    }
	    else start=0;
	    for(int j=0;j<i;j++){
	        cout<<start<<" ";
	        start=1-start;// flip ke liye
	    }cout<<endl;
	}
	return 0;
}
