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
#include <map>
#include <complex>

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class TrianglesContainOriginEasy
{
public:
	
int count(vector <int> x, vector <int> y){


	int res=0;
	complex<int> O(0,0);


	for(int i=0;i<x.size();i++){
		complex<int> v1(x[i],y[i]);
		for(int j=i+1;j<x.size();j++){
			complex<int> v2(x[i],y[i]);
			for(int k=j+1;k<x.size();k++){
				complex<int> v3(x[i],y[i]);

				complex<int>v12=v2-v1;
				complex<int>v2O=O-v2;

				complex<int>v23=v3-v2;
				complex<int>v3O=O-v3;

				complex<int>v31=v1-v3;
				complex<int>v1O=O-v1;


				double c1=v12.real()*v2O.imag()-v12.imag()*v2O.real();
				double c2=v23.real()*v3O.imag()-v23.imag()*v3O.real();
				double c3=v31.real()*v1O.imag()-v31.imag()*v1O.real();

				if((c1>0 && c2>0 && c3>0) ||(c1<0 && c2<0 && c3<0))
					res++;

			}
		}
	}


	return res;
}
};
