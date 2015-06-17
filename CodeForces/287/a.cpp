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

	int n,k;
	cin>>n>>k;

	vector<pair<int,int> > a(n);
	for(int i=0;i<n;i++){
		int _a;
		cin>>_a;
		a[i]=make_pair(_a,i+1);
	}
	sort(a.begin(),a.end());

	int sum=0;
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(sum+a[i].first<=k){
			ans.push_back(a[i].second);
			sum+=a[i].first;
		}
	}

	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	if(ans.size()!=0)cout<<endl;

	return 0;

}