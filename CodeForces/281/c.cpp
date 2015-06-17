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
	vector<long> a(n);
	set<long> d;

	for(int i=0;i<n;i++){
		cin>>a[i];
		d.insert(a[i]);
		d.insert(a[i]+1);
		if(a[i]>0)d.insert(a[i]-1);
	}

	int m;
	cin>>m;
//	m=200000;
	vector<long> b(m);
	for(int i=0;i<m;i++){
		cin>>b[i];
//		b[i]=1;
		d.insert(b[i]);
		d.insert(b[i]+1);
		if(b[i]>0)d.insert(b[i]-1);
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	long long aa,bb;
	aa=n*3;bb=m*3;
//	cout<<aa<<endl;

	for(auto it=d.begin();it!=d.end();it++){
		long dd=(*it);
//		cout<<dd<<endl;
//		cout<<dd<<"‚æ‚è‘å‚«‚¢ŒÂ” ";
		long long big_a=a.end()-upper_bound(a.begin(),a.end(),dd);
		long long big_b=b.end()-upper_bound(b.begin(),b.end(),dd);

		long long aaa=big_a*3+(n-big_a)*2;
		long long bbb=big_b*3+(m-big_b)*2;

		if(aaa-bbb>aa-bb || (aaa-bbb==aa-bb)&&(aaa>aa)){
			aa=aaa; bb=bbb;
		}
	}

	cout<<aa<<":"<<bb<<endl;

}