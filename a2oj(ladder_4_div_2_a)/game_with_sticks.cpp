// http://codeforces.com/problemset/problem/451/A

#include <iostream>
using namespace std;

int main() {
	int n,m,count=0;
	cin>>n>>m;
	while(n>0 && m>0){
	    count++;
	    n--;
	    m--;
	}
	if(count%2==0){
	    cout<<"Malvika";
	}
	else{
	    cout<<"Akshat";
	}
	return 0;
}
