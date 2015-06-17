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

	vector<int> a(n);
	vector< vector<int> > ans(n,vector<int>());
	int a_min=1000;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a_min=min(a_min,a[i]);
	}

	for(int i=0;i<n;i++){
		if(a[i]==a_min){
			a[i]=0;
			for(int j=0;j<a_min;j++) ans[i].push_back(1);
		}else{
			a[i]-=(a_min+1);
			for(int j=0;j<a_min+1;j++) ans[i].push_back(1);
		}
	}

	bool ok=true;
	for(int i=0;i<n && ok;i++) ok=(a[i]==0);

	for(int i=2;i<=k && !ok;i++){
		for(int j=0;j<n;j++){
			if(a[j]!=0){
				a[j]--;
				ans[j].push_back(i);
			}
		}
		bool ok2=true;
		for(int j=0;j<n && ok2;j++) ok2=(a[j]==0);

		ok=ok2;
	}


	if(ok){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<ans[i].size()-1;j++) cout<<ans[i][j]<<" ";
			cout<<ans[i][ans[i].size()-1]<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}


	return 0;

}