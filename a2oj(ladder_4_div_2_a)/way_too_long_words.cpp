// http://codeforces.com/contest/71/problem/A

#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        string str;
        cin>>str;
        int l=str.length();
        if(l<=10){
            cout<<str<<endl;
        }
        else{
            int count = l-2;
            string abc = to_string(count);
            string s = str[0] + abc + str[l-1];
            cout<<s<<endl;
        }
    }
    return 0;
}
