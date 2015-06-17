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
	vector<double> p(n);
	for(int i=0;i<n;i++) cin>>p[i];

	sort(p.rbegin(),p.rend());

	double res=p[0];
	for(int i=2;i<=n;i++){
		double tmp=0;
		for(int j=0;j<i;j++){
			double tmp2=1;
			for(int k=0;k<i;k++){
				if(j==k) tmp2*=p[j];
				else tmp2*=1-p[k];
			}
			tmp+=tmp2;
		}
		if(res>tmp) break;
		else res=tmp;
	}

	cout<<res<<endl;

	return 0;
}
