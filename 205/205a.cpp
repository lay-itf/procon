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
	int n,xt,yt,xo,xe,yo,ye,res;

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>xt>>yt;
		xt%2 ? xo++:xe++;
		yt%2 ? yo++:ye++;

	}

	if(xo%2==0 && yo%2==0) res=0;
	else if((xo+ye)%2 && (xo+ye)>0) res=1;
	else res=-1;

	cout<<res<<endl;

	return 0;

}

