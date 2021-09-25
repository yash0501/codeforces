// http://codeforces.com/problemset/problem/466/A

#include <iostream>
using namespace std;

int main() {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int x=n/m;
	int x1=n%m;
	//cout<<x<<"  ";
	int ans1 = (x*b) + (n-(m*x))*a;
	int ans2=(x+1)*b;
	int ans3=n*a;
	if(ans1<=ans2){
	    if(ans1<=ans3){
	        cout<<ans1;
	    }
	    else{
	        cout<<ans3;
	    }
	}
	else{
	    if(ans2<=ans3){
	        cout<<ans2;
	    }
	    else{
	        cout<<ans3;
	    }
	}
	return 0;
}
