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

int main()
{	
	int n,k;
	cin>>n>>k;

	vector<int> f(n);
	for(int i=0;i<n;i++) cin>>f[i];

	sort(f.begin(),f.end(), greater<int>());

	int res=0;
	for(int i=0;i<n;i+=k){
		res+=2*(f[i]-1);
	}

	cout<<res<<endl;

	return 0;
}
