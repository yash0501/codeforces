// http://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;
 
int main(){
    int w;
    cin>>w;
    if(w%2==0){
        if(w<3){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}
