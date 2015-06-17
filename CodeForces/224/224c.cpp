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
	long long a,b,c,w,x;
	cin>>a>>b>>w>>x>>c;

	if(c<=a) cout<<0<<endl;
//	else if(c-a<=b/x) cout<<c-a<<endl;
	else {
		long long ans=0;
		if(c-a<=b/x) {ans+=c-a;}
		else{
			ans+=b/x; c-=b/x; b=b%x;

		}

	}
	return 0;
}
