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
	long long n,t,c,res,num;
	cin>>n>>t>>c;

	res=num=0;
	for(long long i=0;i<n;i++){
		long long a;
		 cin>>a;
		if(a>t) num=0;
		else{
			num++;
			if(num>=c) res++;
		}
	}

	cout<<res<<endl;

	return 0;
}
