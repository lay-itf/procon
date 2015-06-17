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

	vector< pair<int,int> > vp;

	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		vp.push_back(make_pair(x,y));
	}

	return 0;
}
