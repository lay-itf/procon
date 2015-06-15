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

	int n;
	cin>>n;

	vector< vector<unsigned long long> > d(n, vector<unsigned long long>(n));

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&d[i][j]);
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j && d[i][j]!=0 || i!=j && d[i][j]!=d[j][i]){cout<<"NO"<<endl; return 0;}
		}
	}

	cout<<"YES"<<endl;


}
