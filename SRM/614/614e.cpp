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

class MicroStrings
{
public:
	string makeMicroString(int A, int D){

		ostringstream os;

		while(A>=0){
			os<<A;
			A-=D;
		}

		return os.str();


	}
};
