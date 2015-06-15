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
	int n,x,sum;
	cin>>n>>x;
	sum=0;

	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		sum+=tmp;
	}

	sum=abs(sum);
	int res=0;

	while(sum>0){
		sum-=x;
		res++;
	}

	cout<<res<<endl;

	return 0;
}
