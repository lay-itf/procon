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
	cin>>s;

	int mod;
	if(s.size()==1) mod=(s[0]-'0');
	else mod=(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');

	mod%=4;

	int res=0;
	if(mod==0)	res=1+1+1+1;
	else if(mod==1)	res=1+2+3+4;
	else if(mod==2) res=1+4+4+1;
	else 		res=1+3+2+4;

	cout<<res%5<<endl;

	return 0;
}
