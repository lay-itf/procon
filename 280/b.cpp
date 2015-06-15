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

	long n,l,left,right;
	cin>>n>>l;
	vector<long> a(n);
	cin>>a[0]; left=right=a[0];

	for(int i=1;i<n;i++){
		cin>>a[i];
		left=min(left,a[i]);
		right=max(right,a[i]);
	}
	
	double res=max(left,l-right);

	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++){
		res=max(res,(a[i+1]-a[i])/2.0);
	}

	printf("%.16f\n",res);

}