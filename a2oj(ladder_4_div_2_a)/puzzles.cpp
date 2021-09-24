// http://codeforces.com/problemset/problem/337/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,i,j;
	cin>>n>>m;
	int arr[m];
	for(i=0;i<m;i++){
	    cin>>arr[i];
	}
	sort(arr, arr+m);
	int min=arr[n-1]-arr[0];
	
	for(i=0;i<=m-n;i++){
	    if(arr[i+n-1]-arr[i]<=min){
	        min=arr[i+n-1]-arr[i];
	    }
	}
	cout<<min;
	return 0;
}
