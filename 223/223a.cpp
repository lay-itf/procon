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
	int n;
	vector<int> c;

	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		c.push_back(tmp);
	}

	int ans[2]={0},l=0,r=n-1;

	for(int i=0;i<n;i++){
		if(c[l]>=c[r]) ans[i%2]+=c[l++];
		else ans[i%2]+=c[r--];
	}

	cout<<ans[0]<<" "<<ans[1]<<endl;

	return 0;

}
