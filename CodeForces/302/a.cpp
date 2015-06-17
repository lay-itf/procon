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

	int k;
	string s;
	cin>>k>>s;
/*	
	if(k==1){
		cout<<"YES"<<endl;
		cout<<s<<endl;
		return 0;
	}
	if(k>s.size()){
		cout<<"NO"<<endl;
		return 0;
	}
*/	
	vector<string> ans;
	vector<bool> used(26,false);
	
	string tmp;
	tmp+=s[0]; used[s[0]-'a']=true;
	
	for(int i=1;i<s.size();i++){
		if(used[s[i]-'a']) tmp+=s[i];
		else{
			ans.push_back(tmp);
			tmp.clear(); 
			tmp+=s[i];
			used[s[i]-'a']=true;
		}
	}
	ans.push_back(tmp);
/*	
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<endl;
*/	
	if(ans.size()>=k){
		cout<<"YES"<<endl;
		for(int i=0;i<k-1;i++) cout<<ans[i]<<endl;
		for(int i=k-1;i<ans.size();i++) cout<<ans[i];
		cout<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;

}