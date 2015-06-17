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

	long long n,m,x,y,z,p;
	cin>>n>>m>>x>>y>>z>>p;

	x%=4; y%=2; z%=4;

	for(long long i=0;i<p;i++){
		long long a,b;
		cin>>a>>b;

		for(int j=0;j<x;j++){
			a=n-a+1;
			b=1-b+1;
		}

		for(int j=0;j<y;j++){
			a=m-a+1;
		}

		for(int j=0;j<z;j++){
			a=1-a+1;
			b=m-b+1;
		}

		cout<<a<<" "<<b<<endl;

	}

	return 0;
}
