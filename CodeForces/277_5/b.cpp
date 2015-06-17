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

using namespace std; 


int main(){

	int n,m;

	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++) cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int res=0,i=0,j=0;

	while(i<n && j<m){
		if(abs(a[i]-b[j])<=1){res++; i++; j++;}
		else if(a[i]>b[j]) j++;
		else i++;
	}

	cout<<res<<endl;

	return 0;
}