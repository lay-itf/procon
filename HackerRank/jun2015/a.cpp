//101 Hack Jun 2015,Sherlock and Valid String,30pt,時間内AC

//与えられた文字列の各アルファベットの頻度を調べる
//頻度が他と異なる文字が1種類以下ならYES,そうでないならNO

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
#include <map>
#include <queue>
#include <stack>

using namespace std;

typedef unsigned long long ULL;


int main()
{

	string s;
	cin>>s;
	
	map<char,int> cnt;
	for(int i=0;i<s.size();i++) cnt[s[i]]++;
	
	bool f=true;
	for(auto it=cnt.begin();it!=cnt.end();it++){
		if(it->second!=cnt.begin()->second){
			if(!f){cout<<"NO"<<endl; return 0;}
			else f=false;
		}
	}

	cout<<"YES"<<endl;

	return 0;
}