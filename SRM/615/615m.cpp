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

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class LongLongTripDiv2
{
public:
	string isAble(long long D, int T, int B){

		if(D==T*B || D==T) return "Possible";

		long long l=0,r=T;

		while(l<=r){
			long long m=(l+r)/2;
			long long d=m*B+(T-m);

			cout<<"l="<<l<<" r="<<r<<endl;

			if(D==d) return "Possible";
			else if(D>d) l=m+1;
			else r=m-1;
		}

		return "Impossible";
	}
};
