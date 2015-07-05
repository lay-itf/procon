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

class OkonomiyakiShop
{
public:
	
int count(vector <int> osize, int K){

	int res=0;
	for(int i=0;i<osize.size();i++){
		for(int j=i+1;j<osize.size();j++){
			if(abs(osize[i]-osize[j])<=K) res++;
		}
	}

	return res;
}
};