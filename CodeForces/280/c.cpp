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

typedef unsigned long long ull;

int main(){

	ull n,r,avg,sum=0,res=0;
	cin>>n>>r>>avg;
	vector< pair<ull,ull > > vp;

	for(int i=0;i<n;i++){
		ull a,b;
		cin>>a>>b;

		sum+=a;

		//cost,rest
		if(r-a>0) vp.push_back(make_pair(b,r-a));
	}
	sort(vp.begin(),vp.end());

	int idx=0;
	while(sum<n*avg){
//		cout<<sum<<endl;
		if(sum+vp[idx].second<=n*avg){
			sum+=vp[idx].second;
			res+=vp[idx].second*vp[idx].first;
		}
		else{
			res+=(n*avg-sum)*vp[idx].first;
			sum=n*avg;
		}
		idx++;
	}

	cout<<res<<endl;

}