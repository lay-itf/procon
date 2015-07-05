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

class NumbersChallenge
{
public:
	int MinNumber(vector <int> S){

		sort(S.begin(),S.end());
		int res=S[0];

		for(int i=1;i<S.size();i++){
			if(res+1<S[i]) return min(1,res+1);
			res+=S[i];
		}


		return min(1,res+1);
	}
};
