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

GreaterGameDiv2
{
public:
	
int calc(vector <int> snuke, vector <int> sothe){

		int res=0;
		for(int i=0;i<snuke.size();i++) if(snuke[i]>sothe[i]) res++;

		return res;
	}
};
