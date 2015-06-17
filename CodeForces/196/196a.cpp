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
	int n,m,tmp,res=1001,max,min;
	vector<int> f;

	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>tmp;
		f.push_back(tmp);
	}

	sort(f.begin(),f.end());

	for(int i=0;i<m-n;i++){
		if(res>f[i+n-1]-f[i]) res=f[i+n-1]-f[i];
	}

	cout<<res<<endl;

	return 0;

}

//5 7 10 10 12 22