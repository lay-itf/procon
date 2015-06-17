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
	int n,c;
	cin>>n>>c;

	vector<int> x;
	x.resize(n);

	for(int i=0;i<n;i++) cin>>x[i];

	int res=0;
	for(int i=0;i<n-1;i++){
		int p=x[i]-x[i+1]-c;
		for(int j=i+2;j<n;j++){
			p=max(p,p-x[j]-c);
		}
		res=max(res,p);
	}

	cout<<res<<endl;

	return 0;
}
