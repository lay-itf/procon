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

bool prime[1000001];

int main()
{	
	long long n,m;
	cin>>n>>m;

	unsigned long long min,max;
	if(n==m) min=0;
	else{
		unsigned long long ave=n/m;
		unsigned long long x=n-ave*m;

		min=(m-x)*ave*(ave-1)/2;
		min+=x*(ave+1)*ave/2;
		if(min==0) min=1;

	}
	
	if(n-m+1>=2) max=(n-m+1)*(n-m)/2;
	else max=0;

	cout<<min<<" "<<max<<endl;

	return 0;
}