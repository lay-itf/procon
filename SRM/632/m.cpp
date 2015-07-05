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

bool isCD(vector<int> d, int b, int e){


	if(b==e || b+1==e) return true;

	double a=d[b+1]-d[b];

	for(int i=b+1;i<e;i++){
		if( d[i+1]-d[i]!=a ) return false;
	}

	return true;
}

class 
PotentialGeometricSequence
{
public:
	
	int numberOfSubsequences(vector <int> d){

		int res=0;
		
		for(int i=1;i<=d.size();i++){

			for(int j=0;j+i-1<d.size();j++){
				cout<<j<<" "<<j+i-1<<endl;
				if(isCD(d,j,j+i-1)) res++;
			}

		}

		return res;

	}
};
