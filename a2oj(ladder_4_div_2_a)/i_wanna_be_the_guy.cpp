// http://codeforces.com/problemset/problem/469/A

#include <iostream>
using namespace std;

int main() {
	int n,i,p,q;
	cin>>n;
	cin>>p;
	int arr[n];
	for(i=0;i<n;i++){
	    arr[i]=0;
	}
	int a;
	for(i=0;i<p;i++){
	    cin>>a;
	    arr[a-1]++;
	}
	cin>>q;
	for(i=0;i<q;i++){
	    cin>>a;
	    arr[a-1]++;
	}
	int count=0;
	for(i=0;i<n;i++){
	    if(arr[i]!=0){
	        count++;
	    }
	}
	if(count==n){
	    cout<<"I become the guy.";
	}
	else{
	    cout<<"Oh, my keyboard!";
	}
	return 0;
}
