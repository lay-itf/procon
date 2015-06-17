#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>

using namespace std; 

int main(){

	long a[10][10];
	for(int i=0;i<10;i++) a[i][0]=a[0][i]=1;

	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++)
			a[i][j]=a[i-1][j]+a[i][j-1];
	}

	int n;
	cin>>n;

	cout<<a[n-1][n-1]<<endl;

	return 0;

}