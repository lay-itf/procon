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
#include <complex>

using namespace std;

int main()
{
	double a,d;
	int n;

	cin>>a>>d>>n;

	complex<double> pos=polar(sqrt(2.0)*a,-M_PI/2.0);

	for(long i=0;i<n;++i){
		pos*=polar(1.0,M_PI*d/2.0/a);
		if(arg(pos)>=0 || arg(pos)<=M_PI/2.0) printf("%f %f\n",imag(pos),)
	}

	return 0;
}
