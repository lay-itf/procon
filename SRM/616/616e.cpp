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

class WakingUpEasy
{
public:
	int countAlarms(vector <int> volume, int S){

		int res=0;
		for(int i=0;S>0;res++,i++) S-=volume[i%volume.size()];

		return res;

	}
};
