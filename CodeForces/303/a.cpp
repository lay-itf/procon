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
#include <map>

using namespace std; 

int main(){

	int n;
	cin>>n;
	
	vector<int> ans;
	for(int i=0;i<n;i++){
		int a;
		bool ok=true;
		for(int j=0;j<n;j++){
			cin>>a;
			if(i==j) continue;
			if(a==1 || a==3) ok=false;
		}
		if(ok) ans.push_back(i+1);
	}
	
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<endl;
	
	return 0;

}