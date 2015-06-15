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
	cin>>m>>n;
	double res=0;

	for(int i=1;i<=m;i++)
		res+=i*(pow((double)i/m,n)-pow((double)(i-1)/m,n));

	printf("%.10f\n",res);

	return 0;
}
