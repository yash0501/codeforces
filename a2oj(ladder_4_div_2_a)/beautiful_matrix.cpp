// http://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int i,j,a,flag=0;
	for(i=1;i<=5;i++){
	    for(j=1;j<=5;j++){
	        cin>>a;
	        if(a==1){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        break;
	    }
	}
	//cout<<i<<" "<<j<<" ";
	int sum=abs(i-3)+abs(j-3);
	cout<<sum;
	return 0;
}
