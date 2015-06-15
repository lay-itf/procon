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
	int n,m;
	cin>>n>>m;
	vector<int> a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	int res=0;
	for(int i=0;i<n;){
		res++;
		int m2=m;
		while(a[i]<=m2 && i<n){
			m2-=a[i];
			i++;
		}
	}

	cout<<res<<endl;

	return 0;
}
