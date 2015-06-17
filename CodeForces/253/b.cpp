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
	string s;
	int k;
	cin>>s>>k;

	int res=0,res2=0;

	for(int i=1;i<=s.size()/2;i++){
		int pos=0;
		while(pos+i<s.size()){
			bool f=true;
			for(int j=0;j<i && f;j++){
				if(s[pos+j]!=s[pos+j+i]) f=false;
			}

			if(f){res=i;break;}
			pos++;
		}

	}

	if(s.size()==k){res2=2*k;}
	else{
		int tmp=1;
		for(int i=s.size()-2;i>=0;i--){
			if(s[i]!=s[s.size()-1]) break;
			tmp++;
		}
		res2=tmp+k;

		for(int i=s.size()-2;i>=0;i--){
			if(((s.size()-1)-i-1)>k) break;
			if(s[s.size()-1]==s[i]){
				int tmp=((s.size()-1)-i)*2;
				res2=max(res2,tmp);
			}
		}

	}

	cout<<max(res,res2)<<endl;

	return 0;


	return 0;
}
