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
	int n,k,res;
	cin>>n>>k;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a.begin(),a.end());

	res=0;
	for(int i=2;i<n;i+=3){
		if(a[i]+k<=5) res++;
	}

	cout<<res<<endl;

	return 0;
}
