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

unsigned long long a[30010];

int main()
{
	unsigned long long n;
	cin>>n;

	for(unsigned long long i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);

	unsigned long long res=0;
	for(unsigned long long i=0;i<n;i++){res+=a[i]*(i+2);}
	res-=a[n-1];

	cout<<res<<endl;

	return 0;

}
