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
	unsigned long long a,b,x;
	x=261734062;
	a=135360;
	b=718513035;

	double tmp=a*x/b;
	cout<<(unsigned long long)(x-tmp*b/a)<<endl;

	return 0;
}
