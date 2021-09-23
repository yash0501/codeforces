// http://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin>>str;
	int n=str.length(),i;
	string a = "hello";
	int j=0;
	for(i=0;i<n;i++){
	    if(str[i]==a[j]){
	        j++;
	    }
	}
	if(j==5){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}
