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

bool check(string s){
	//cout<<s<<endl;
	for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-1-i]) return false;
	
	
	//cout<<"true"<<endl;
	return true;
}

int main(){

	string s;
	int k;
	cin>>s>>k;
	
	if(s.size()%k){cout<<"NO"<<endl; return 0;}

	string tmp;
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(tmp.size()==s.size()/k){
			if(check(tmp)) cnt++;
			tmp.clear();
		}
		tmp+=s[i];
	}
	
	if(tmp.size()==s.size()/k){
		if(check(tmp)) cnt++;
		tmp.clear();
	}	
	if(cnt==k) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;

}