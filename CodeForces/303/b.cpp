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

	string s,t;
	cin>>s>>t;
	
	string ans;
	long cnt=0;
	for(long i=0;i<s.size();i++){
		if(s[i]==t[i]) ans+='1';
		else{
			if(cnt%2) ans+=s[i];
			else ans+=t[i];
			cnt++;
		}
	}

	int d1=0,d2=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=ans[i]) d1++;
		if(t[i]!=ans[i]) d2++;
	}
	if(d1==d2) cout<<ans<<endl;
	else cout<<"impossible"<<endl;
	
	return 0;

}