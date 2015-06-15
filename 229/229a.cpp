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
	vector<int>x,y;

	cin>>n;
	x.resize(n); y.resize(n);

	for(int i=0;i<n;i++) cin>>x[i]>>y[i];

	set<int> sx,sy;

	for(int i=0;i<n;i++) sx.insert(x[i]);
	for(int i=0;i<n;i++) sy.insert(y[i]);

	cout<<min(sx.size(),sy.size())<<endl;

	return 0;
}
