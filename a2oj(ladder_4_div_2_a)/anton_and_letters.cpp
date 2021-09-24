// http://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int arr[26],a=0,i;
	for(i=0;i<26;i++){
	    arr[i]=0;
	}
	int n=str.length();
	//cout<<str<<" ";
	//cout<<n<<" ";
	for(i=0;i<n;i++){
	    if(str[i]=='a'){
	        arr[0]++;
	    }
	    else if(str[i]=='b'){
	        arr[1]++;
	    }
	    else if(str[i]=='c'){
	        arr[2]++;
	    }
	    else if(str[i]=='d'){
	        arr[3]++;
	    }
	    else if(str[i]=='e'){
	        arr[4]++;
	    }
	    else if(str[i]=='f'){
	        arr[5]++;
	    }
	    else if(str[i]=='g'){
	        arr[6]++;
	    }
	    else if(str[i]=='h'){
	        arr[7]++;
	    }
	    else if(str[i]=='i'){
	        arr[8]++;
	    }
	    else if(str[i]=='j'){
	        arr[9]++;
	    }
	    else if(str[i]=='k'){
	        arr[10]++;
	    }
	    else if(str[i]=='l'){
	        arr[11]++;
	    }
	    else if(str[i]=='m'){
	        arr[12]++;
	    }
	    else if(str[i]=='n'){
	        arr[13]++;
	    }
	    else if(str[i]=='o'){
	        arr[14]++;
	    }
	    else if(str[i]=='p'){
	        arr[15]++;
	    }
	    else if(str[i]=='q'){
	        arr[16]++;
	    }
	    else if(str[i]=='r'){
	        arr[17]++;
	    }
	    else if(str[i]=='s'){
	        arr[18]++;
	    }
	    else if(str[i]=='t'){
	        arr[19]++;
	    }
	    else if(str[i]=='u'){
	        arr[20]++;
	    }
	    else if(str[i]=='v'){
	        arr[21]++;
	    }
	    else if(str[i]=='w'){
	        arr[22]++;
	    }
	    else if(str[i]=='x'){
	        arr[23]++;
	    }
	    else if(str[i]=='y'){
	        arr[24]++;
	    }
	    else if(str[i]=='z'){
	        arr[25]++;
	    }
	}
	int count=0;
	for(i=0;i<26;i++){
	    //cout<<arr[i]<<" ";
	    if(arr[i]!=0){
	        //cout<<i<<"  ";
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
