// http://codeforces.com/problemset/problem/268/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j,k,count=0;
	int arr[n][2];
	for(i=0;i<n;i++){
	    for(j=0;j<2;j++){
	        cin>>arr[i][j];
	    }
	}
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        if(arr[i][0]==arr[j][1] ){
	            count++;
	            //cout<<i<<" "<<j<<"  ";
	        }
	    }
	}
	cout<<count;
	return 0;
}
