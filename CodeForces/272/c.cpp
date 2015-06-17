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
#include <map>

using namespace std;

const long long mod=1e9+7;

int main()
{	

	long long a,b;
	cin>>a>>b;

	//First term b(b^2-1)/2
	//Common difference (b^3-b^2)/2
	//term number a
	long long res=b*(b-1)/2%mod;
	res*=(a+(b* ((a*(a+1)/2)%mod) )%mod);
	res%=mod;

	cout<<res<<endl;

	return 0;
}
