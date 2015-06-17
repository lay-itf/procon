#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>

using namespace std;

int main()
{
	string s;
	cin>>s;

	long long ans=0;
	bool f;

	for(int i=0;i<s.size();i++){
		f=false;
		for(int j=i+3;j<s.size();j++){
			if(s[j]=='r' && s[j-1]=='a' && s[j-2]=='e' && s[j-3]=='b') f=true;
			if(f) ans++;

		}
	}

	cout<<ans<<endl;

	return 0;
}