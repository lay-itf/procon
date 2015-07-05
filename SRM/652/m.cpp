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

long long gcd(long long a, long long b){

	if(b==0) return a;
	if(a%b==0) return b;
	else return gcd(b,a%b);

}

class ThePermutationGameDiv2
{
public:
	long long findMin(int N){

		long long res[36];
		res[1]=1;
		res[2]=2;

		for(int i=3;i<36;i++){
			res[i]=res[i-1]*i/gcd(res[i-1],i);
		}

		return res[N];
	}
};

int main()
{
	ThePermutationGameDiv2 test;
	for(int i=1;i<36;i++) cout<<i<<" "<<test.findMin(i)<<endl;
	return 0;
}