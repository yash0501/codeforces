// http://codeforces.com/problemset/problem/144/A

#include <iostream>
using namespace std;

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	int min=0,max=n-1;
	for(i=0;i<n;i++){
	    if(arr[i]<=arr[min]){
	        min=i;
	    }
	    if(arr[n-i-1]>=arr[max]){
	        max=n-i-1;
	    }
	}
	int ans;
	if(max<min){
	    ans = max + (n-1-min);
	}
	else if(max>min){
	    ans = (max + (n-1-min)) - 1;
	}
	cout<<ans;
	return 0;
}
