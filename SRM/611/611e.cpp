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

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class LCMSetEasy
{
public:
	string include(vector <int> S, int x){

		vector<long> v;
		v.push_back(1);
		v.push_back(1);

		for(int i=0;i<S.size();i++){
			if(S[i]==gcd(S[i],x)) v.push_back(S[i]);
		}

		long l=lcm(v[0],v[1]);

		for(int i=2;i<v.size();i++) l=lcm(l,v[i]);

		if(l==x) return "Possible";
		else return "Impossible";


	}
};
