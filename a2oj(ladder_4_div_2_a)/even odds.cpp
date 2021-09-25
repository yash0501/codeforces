// http://codeforces.com/problemset/problem/318/A

#include <iostream>
using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	if(n%2!=0){
	    if(k<=(n+1)/2){
	        cout<<2*k-1;
	    }
	    else{
	        long long int p = k-(n+1)/2;
	        cout<<2*p;
	    }
	}
	else{
	    if(k<=n/2){
	        cout<<2*k-1;
	    }
	    else{
	        long long int p = k-(n)/2;
	        cout<<2*p;
	    }
	}
	return 0;
}
