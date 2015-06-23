//101 Hack Jun 2015,Sherlock and Physics,40pt,時間内AC

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
#include <sstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

typedef unsigned long long ULL;

long long gcd(long long x,long long y){
	if(y==0) return x;
	else return gcd(y,x%y);
}

int main()
{
	
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		long long r,s;
		cin>>r>>s;
		long long x=r,y=s;
		long long g=gcd(x,y);
		x/=g; y/=g;
		x%=y;

		long long wait=0;
		if(4*x>y){
			wait=s*(y-x)/y;
			x=0;y=1;
		}

		cout<<r+wait<<" "<<x<<"/"<<y<<endl;
	}

	return 0;
}