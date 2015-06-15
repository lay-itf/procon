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
	int n;
	string s;
	cin>>n>>s;

	int res=1;
	if(s[0]=='0') s[0]='1';
	else{ 
		s[0]='0';
		for(int i=1;i<n;i++){
			res++;

			if(s[i]=='0') break;
		}
	}

	cout<<res<<endl;

	return 0;
}
