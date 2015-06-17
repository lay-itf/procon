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


	int pos,pos2;
	long long ans=0;

	const int N=s.size();

	for(int len=4;len<=N;len++){
		for(int i=0;i<=N-len;i++){
			if(s.substr(i,len).find("bear")!=string::npos){ans++;}
		}
	}

	cout<<ans<<endl;

	return 0;
}