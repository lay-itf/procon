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

typedef map<char,int> M;

int main(){

	string a,b,c;
	
	cin>>a>>b>>c;
	
	int cnt_a[26]={};
	for(int i=0;i<a.size();i++) cnt_a[a[i]-'a']++;

	int cnt_b[26]={};
	for(int i=0;i<b.size();i++) cnt_b[b[i]-'a']++;	

	int cnt_c[26]={};
	for(int i=0;i<c.size();i++) cnt_c[c[i]-'a']++;		

	pair<int,int> x(0,0);
	for(int use=0;use*b.size()<=a.size();use++){

		int ca[26],cb[26],cc[26];
		for(int i=0;i<26;i++){
			ca[i]=cnt_a[i];
			cb[i]=cnt_b[i];
			cc[i]=cnt_c[i];
		}

		bool ok=true;
		
		for(int i=0;i<26 && ok;i++){
			if(ca[i]>=use*cb[i]) ca[i]-=use*cb[i];
			else ok=false;
		}
		
		if(!ok) continue;
		
		int use2=2000000;
		for(int i=0;i<26;i++){
			if(cc[i]==0) continue;
			use2=min(use2,ca[i]/cc[i]);
		}
		
		if(x.first+x.second<use+use2) x=pair<int,int>(use,use2);
	}
	
	
	string res;
	for(int i=0;i<x.first;i++) res+=b;
	for(int i=0;i<x.second;i++) res+=c;	
	
	for(int i=0;i<b.size();i++) cnt_a[b[i]-'a']-=x.first;
	for(int i=0;i<c.size();i++) cnt_a[c[i]-'a']-=x.second;
			
	for(int i=0;i<26;i++){
		for(int j=0;j<cnt_a[i];j++) res+='a'+i;
	}		
	
	cout<<res<<endl;
	
	return 0;

}