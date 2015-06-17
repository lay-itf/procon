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
	vector<long long> sum(s.size());

	for(long long i=1;i<s.size();i++){
		sum[i]=sum[i-1]+(s[i]==s[i-1]);
	}

	long long m;
	cin>>m;

	for(long long i=0;i<m;i++){
		long long l,r;
		cin>>l>>r;

		cout<<sum[r-1]-sum[l-1]<<endl;
	}

	return 0;

}