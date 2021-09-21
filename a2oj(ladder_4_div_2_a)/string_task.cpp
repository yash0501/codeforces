// http://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin>>str;
	int i;
	string ans;
	for(i=0;i<str.length();i++){
	    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
	        continue;
	    }
	    else{
	        ans = ans + ".";
	        switch(str[i]){
	            case 'B': ans += 'b';
	            break;
	            case 'C': ans += 'c';
	            break;
	            case 'D': ans += 'd';
	            break;
	            case 'F': ans += 'f';
	            break;
	            case 'G': ans += 'g';
	            break;
	            case 'H': ans += 'h';
	            break;
	            case 'J': ans += 'j';
	            break;
	            case 'K': ans += 'k';
	            break;
	            case 'L': ans += 'l';
	            break;
	            case 'M': ans += 'm';
	            break;
	            case 'N': ans += 'n';
	            break;
	            case 'P': ans += 'p';
	            break;
	            case 'Q': ans += 'q';
	            break;
	            case 'R': ans += 'r';
	            break;
	            case 'S': ans += 's';
	            break;
	            case 'T': ans += 't';
	            break;
	            case 'V': ans += 'v';
	            break;
	            case 'W': ans += 'w';
	            break;
	            case 'X': ans += 'x';
	            break;
	            case 'Z': ans += 'z';
	            break;
	            default: ans += str[i];
	        }
	    }
	}
	cout<<ans;
	return 0;
}
