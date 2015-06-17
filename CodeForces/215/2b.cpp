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

typedef unsigned long long ull;

int main()
{
	ull n,m;
	cin>>n>>m;

	vector<ull> a(n);
	for(ull i=0;i<n;i++) cin>>a[i];

	set<ull> s;
	vector<ull> ans(n);
	for(ull i=n-1;i>0;i--){
		s.insert(a[i]);
		ans[i]=s.size();
	}
		s.insert(a[0]);
		ans[0]=s.size();


	for(ull i=0;i<m;i++){
		ull l;
		cin>>l;
		cout<<ans[l-1]<<endl;
	}

	return 0;

}
