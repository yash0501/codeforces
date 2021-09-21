//http://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin>>str;
	int a=0,b=0,c=0;
	string ans;
	for(int i=0;i<str.length();i=i+2){
	    if(str[i]=='1'){
	        a++;
	    }
	    else if(str[i]=='2'){
	        b++;
	    }
	    else if(str[i]=='3'){
	        c++;
	    }
	}
	//cout<<a<<" "<<b<<" "<<c<<" ";
	int i=0;
	while(a>0 && i<str.length()){
	    //cout<<"Loop1 ";
	    if(i%2!=0){
	        ans += "+";
	        i++;
	    }
	    else{
	        ans += "1";
	        i++;
	        a--;
	    }
	}
	while(b>0 && i<str.length()){
	    //cout<<"Loop2 ";
	    if(i%2!=0){
	        ans += "+";
	        i++;
	    }
	    else{
	        ans += "2";
	        i++;
	        b--;
	    }
	}
	while(c>0 && i<str.length()){
	    //cout<<"Loop3 ";
	    if(i%2!=0){
	        ans += "+";
	        i++;
	    }
	    else{
	        ans += "3";
	        i++;
	        c--;
	    }
	}
	cout<<ans;
	return 0;
}
