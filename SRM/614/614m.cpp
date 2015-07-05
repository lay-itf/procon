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

long long min(long long a, long long b){
	if(a>=b) return b;
	else return a;
}

long long max(long long a, long long b){
	if(a>=b) return a;
	else return b;
}

long long area(long long a, long long b,long long c, long long d){
	long long x,y;

	if(a>b) x=a-b+2;
	else x=b-a+2;
	if(c>d) y=c-d+2;
	else y=d-c+2;

	return x*y;
}

class MinimumSquareEasy
{
public:
	long long minArea(vector <int> x, vector <int> y){

		int a=0,b=0;

		for(int i=0;i<x.size();i++){
			for(int j=i+1;j<x.size();j++){
				for(int k=0;k<x.size();k++){
					if(k==i || k==j) continue;
					for(int l=k+1;l<x.size();l++){
						if(l==i || l==j) continue;
						long long tmp=(x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]);
						long long tmp2=(x[k]-x[l])*(x[k]-x[l])+(y[k]-y[l])*(y[k]-y[l]);
						if(tmp<tmp2){
							a=k; b=l;
						}
					}
				}
			}
		}

		cout<<a<<" "<<b<<endl;

		return area(x[a],x[b],y[a],y[b]);

	}
};
