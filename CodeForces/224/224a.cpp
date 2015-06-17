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
	string p,s;

	cin>>p>>s;

	string l,r;

	int i;
	for(i=0;p[i]!='|';i++) l+=p[i];
	i++; 
	for(;i<p.size();i++) r+=p[i];

	for(i=0;i<s.size();i++){
		if(l.size()>=r.size()) r+=s[i];
		else l+=s[i];
	}

	if(l.size()!=r.size()) cout<<"Impossible"<<endl;
	else cout<<l<<"|"<<r<<endl;
}
