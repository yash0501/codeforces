// http://codeforces.com/problemset/problem/136/A

#include <iostream>
using namespace std;

int main() {
	int i,n,a;
	cin>>n;
	int arr[n];
	for(i=1;i<=n;i++){
	    cin>>a;
	    arr[a-1]=i;
	}
	for(i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
