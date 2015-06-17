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

	int v1,v2,t,d;
	cin>>v1>>v2>>t>>d;

	vector<double> sp(t);
	sp[0]=v1; sp[t-1]=v2;

	for(int i=1;i<t-1;i++){
		int x=-d;
		for(int j=-d+1;j<=d;j++){
			if(abs(sp[i-1]+j-sp[t-1])<=d*(t-1-i)) x=j;
		}
		sp[i]=sp[i-1]+x;
	}

	int res=0;
	for(int i=0;i<t;i++){
		res+=sp[i];
//		cout<<sp[i]<<" ";
	}
//	cout<<endl;
	cout<<res<<endl;

	return 0;

}