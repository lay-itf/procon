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
	int n,res[6]={0};
	double a,b;

	cin>>n;

	for(int i=0;i<n;++i){
		cin>>a>>b;

		if(a>=35.0) res[0]++;
		if(30.0<=a && a<35.0) res[1]++;
		if(25.0<=a && a<30.0) res[2]++;
		if(b>=25.0) res[3]++;
		if(a>=0.0 && b<0.0) res[4]++;
		if(a<0.0) res[5]++;
	}

	for(int i=0;i<5;++i) cout<<res[i]<<" ";
	cout<<res[5]<<endl;

	return 0;
}

