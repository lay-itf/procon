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

	int w[26];
	int max_s=0;
	for(int i=0;i<26;i++){
		 cin>>w[i];
		if(w[max_s]<w[i]) max_s=i;
	}

	for(int i=0;i<k;i++) s+=('a'+max_s);

	long long res=0;

	for(int i=0;i<s.size();i++){
		res+=(i+1)*w[s[i]-'a'];
	}


	cout<<res<<endl;

	return 0;
}