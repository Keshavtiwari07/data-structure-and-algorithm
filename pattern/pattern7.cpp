#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
	for(int i=1;i<=n;i++){// for the number of rows
	    for(int j=1;j<=n-i;j++){// for no. of column of space in start
	        cout<<" ";
	    } 
	     for(int j=1;j<=2*i-1;j++){//for no. of column of stars
	        cout<<"*";
	    }
	    for(int j=1;j<=n-i;j++){//for no. of column of space in end
	        cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}