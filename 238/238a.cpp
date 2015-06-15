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
	cin>>n;

	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];

	sort(v.begin(),v.end());

	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	cout<<endl;

	return 0;
}
