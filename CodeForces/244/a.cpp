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

	int num=0,res=0;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;

		if(tmp>0) num+=tmp;
		else if(num>0) num--;
		else res++;
	}

	cout<<res<<endl;
	return 0;
}
