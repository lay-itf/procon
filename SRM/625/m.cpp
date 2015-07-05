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

class IncrementingSequence
{
public:
	string canItBeDone(int k, vector <int> A){

		const string ok="POSSIBLE";
		const string ng="IMPOSSIBLE";

		vector<int> count(100);
		for(int i=0;i<A.size();i++) count[A[i]]++;

		for(int i=1;i<=A.size();i++){
			bool f=false;
			for(int j=1;j<=i;j++){
				if(count[j]>0 && (i-j)%k==0){f=true; count[j]--; break;}
			}
			if(!f) return ng;
		}


		return ok;

	}
};
