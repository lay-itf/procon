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

class 

ShoppingSurveyDiv2
{
public:
	
int minValue(int N, vector <int> s){

		int res;
		for(res=0;res<=N;res++){
			int rest=0;
			for(int i=0;i<s.size();i++){
				if(s[i]>=res) rest+=s[i]-res;
			}
			if(rest<=(N-res)*(s.size()-1)) return res;
		}

	}
};
