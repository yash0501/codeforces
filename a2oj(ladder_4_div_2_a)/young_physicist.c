// http://codeforces.com/problemset/problem/69/A

#include <stdio.h>

int main() {
	//code
	int n,i,j,x,y,z;
    scanf("%d",&n);
    int arr[n][3];
    x=0;
    y=0;
    z=0;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            if(j==0){
                x=x+arr[i][j];
            }
            else if(j==1){
                y=y+arr[i][j];
            }
            else if(j==2){
                z=z+arr[i][j];
            }
        }
    }
    if(x==0 && y==0 && z==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
	return 0;
}
