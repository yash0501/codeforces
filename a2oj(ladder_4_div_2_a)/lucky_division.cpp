// http://codeforces.com/problemset/problem/122/A

#include <iostream>
using namespace std;

int main() {
	int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int n,i,a=0;
	cin>>n;
	for(i=0;i<14;i++){
	    if(n%arr[i]==0){
	        a++;
	        break;
	    }
	}
	if(a==0){
	    cout<<"NO";
	}
	else{
	    cout<<"YES";
	}
	return 0;
}
