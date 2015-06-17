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
	int a,b,c;
	cin>>a>>b>>c;

	int res=a+b+c;
	res=max(res,a+b*c);
	res=max(res,a+b*c);
	res=max(res,(a+b)*c);
	res=max(res,a*b+c);
	res=max(res,a*(b+c));
	res=max(res,a*b*c);

	cout<<res<<endl;

	return 0;
}
