#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
	for(int i=1;i<=n;i++){//for the rows
	    for(int j=1;j<=i;j++){
	        cout<<" ";
	    } 
	     for(int j=1;j<=2*(n-i)+1;j++){
	        cout<<"*";
	    }
	    for(int j=1;j<=i;j++){
	        cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}