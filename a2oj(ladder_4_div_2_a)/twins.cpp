//http://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int arr[n];
	int sum=0;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	    sum += arr[i];
	}
	sort(arr, arr+n);
	/*for(i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;*/
	int half=0,count=0;
	i=n-1;
	while(half<=sum/2 && i>=0){
	    half += arr[i];
	    count++;
	    i--;
	    //cout<<half<<" ";
	}
	//cout<<endl;
	cout<<count;
	return 0;
}
