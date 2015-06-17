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

	vector<int> res(n+1,-1);

	for(int i=0;i<m;i++){
		int b;
		cin>>b;
		for(int j=b;j<=n;j++){
			if(res[j]==-1) res[j]=b;
		}
	}

	for(int i=1;i<n;i++) cout<<res[i]<<" ";
	cout<<res[n]<<endl;

	return 0;
}
