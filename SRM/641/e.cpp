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

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class BuyingTshirts
{
public:
	
int meet(int T, vector <int> Q, vector <int> P){

	int res=0;
	int sq=0,sp=0;

	for(int i=0;i<Q.size();i++){
		sq+=Q[i];
		sp+=P[i];

		if(sq>=T && sp>=T) res++;

		if(sq>=T) sq-=T;
		if(sp>=T) sp-=T;
		
	}

	return res;
};
