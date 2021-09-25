// http://codeforces.com/problemset/problem/313/A

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>0){
	    cout<<n;
	}
	else{
	    int o=abs(n%10);
	    int t1=n%100;
	    int t=abs(t1/10);
	    if(o>=t){
	        // remove ones
	        
	        cout<<n/10;
	    }
	    else{
	        // remove tens
	        
	        int ans=n/100;
	        
	        ans=(ans*10)-o;
	        cout<<ans;
	    }
	}
	return 0;
}
