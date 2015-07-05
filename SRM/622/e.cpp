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

class FibonacciDiv2
{
public:
	int find(int N){

		vector<long long> f;
		f.push_back(0);
		f.push_back(1);

		do{
			f.push_back(f[f.size()-1]+f[f.size()-2]);
		}while(f[f.size()-1]<1000000*2);

		return f.size();

	}
};
