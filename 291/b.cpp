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

	int n;
	cin>>n;

	vector<long long> x(n+1),y(n+1);
	vector<bool> d(n+1,false);
	d[0]=true;
	for(int i=0;i<n+1;i++){
		cin>>x[i]>>y[i];
	}

	int res=0;

	for(int i=0;i<n+1;i++){
		if(d[i]) continue;

		d[i]=true;
		res++;
		for(int j=0;j<n+1;j++){
			if( (y[0]-y[i])*(x[0]-x[j])==(y[0]-y[j])*(x[0]-x[i]) ) d[j]=true;
		}
	}

	cout<<res<<endl;


	double k=(2.0-0.0)/(9973.0-0.0);
	double b=0-k*0;
	if(-2.0==k*(-9973+1)+b) cout<<"hack"<<endl;

	return 0;

}