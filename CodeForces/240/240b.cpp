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

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

int main()
{
	unsigned long long n,a,b;
	cin>>n>>a>>b;

	for(long long i=0;i<n;i++){
		unsigned long long x;
		cin>>x;

		double tmp=a*x/b;
		cout<<(unsigned long long)(x-tmp*b/a)<<" ";
	}
	cout<<endl;

	return 0;
}
