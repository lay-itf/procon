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

const long long mod=1e9+7;

int main()
{	

	long long u[]={1,mod,0};
	long long v[]={0,2,1};

	while(v[1]!=0){
		long long w=u[1]/v[1];
		long long t[]={u[0]-v[0]*w,u[1]-v[1]*w,u[2]-v[2]*w};

		u[0]=v[0]; u[1]=v[1]; u[2]=v[2];
		v[0]=t[0]; v[1]=t[1]; v[2]=t[2];

	}

	cout<<u[0]<<" "<<u[1]<<" "<<u[2]<<endl;


	for(long long i=0;i<16;i++) cout<<i*3<<" "<<i*3*500000004%mod<<endl;

	return 0;
}
