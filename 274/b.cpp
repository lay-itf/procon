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
	int n,k;
	cin>>n>>k;

	vector< pair<long long,int> > a(n);
	for(int i=0;i<n;i++){
		long long tmp;
		cin>>tmp;
		a[i]=make_pair(tmp,i+1);
	}

	long long s=0,m=0;
	vector< pair<long long,int> > op;

	for(int i=0;i<k;i++){
		sort(a.begin(),a.end());

		if( (a[n-1].first-a[0].first) <=1) break;

		a[n-1].first--;
		a[0].first++;
		op.push_back(make_pair(a[n-1].second,a[0].second));

	}

	sort(a.begin(),a.end());

	cout<<a[n-1].first-a[0].first<<" "<<op.size()<<endl;
	for(int i=0;i<op.size();i++){
		cout<<op[i].first<<" "<<op[i].second<<endl;
	}

	return 0;
}
