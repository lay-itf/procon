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

class AmebaDiv2
{
public:
	int simulate(vector <int> X, int A){

		vector<int>::iterator pos;
		while((pos=find(X.begin(),X.end(),A))!=X.end()){
			A*=2;
			*pos=-1;
		}
	
		return A;


	}
};
