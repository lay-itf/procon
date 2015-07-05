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

class PairGameEasy
{
public:
	string able(int a, int b, int c, int d){

		while(d>0 && c>0){
			if(a==c && b==d){return "Able to generate";}
			if(c>d) c-=d;
			else d-=c;
		}

		return "Not able to generate";

	}
};
