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

	int n,m;
	cin>>n>>m;


	set<string> ss;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		for(int j=0;j<s.size();j++){
			string s2=s;
			if(s2[j]=='c') s2[j]='a';
			else s2[j]++;
			ss.insert(s2);
			if(s2[j]=='c') s2[j]='a';
			else s2[j]++;
			ss.insert(s2);
		}

	}

	for(int i=0;i<m;i++){
		string t;
		cin>>t;

		if(ss.find(t)!=ss.end()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}


	return 0;

}