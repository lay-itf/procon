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

using namespace std;

int main()
{
	int n,p;
	string s;
	cin>>n>>p>>s;

	if(n==1){
		if(s[0]=='a'+p-1) cout<<"NO"<<endl;
		else cout<<(char)(s[0]+1)<<endl;
		return 0;
	}

	if(p==1){
		cout<<"NO"<<endl;
		return 0;
	}

	for(int i=1;i<p;i++){
		string s2=s;
		s2[n-1]=(s2[n-1]-'a'+i)%p+'a';

		if(s2[n-1]<s[n-1]){
			 s2[n-2]=(s2[n-2]-'a'+1)%p+'a';
			if(s2[n-2]<s2[n-2] && n-2==0) continue;
//cout<<s2<<endl;
			if(s2[n-2]==s2[n-3]) continue;
		}else{
//cout<<s2<<endl;
			if(s2[n-1]==s2[n-2]) continue;
		}
		

		bool f=true;
		for(int i=0;i<n/2 && f;i++){
			if(s2[i]!=s2[n-i-1]) f=false;
		}
		if(f) continue;

		cout<<s2<<endl;
		return 0;

	}


	cout<<"NO"<<endl;

	return 0;
}
