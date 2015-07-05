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
GameOfStones
{
public:
	
int count(vector <int> stones){

		int sum=0;
		const int n=stones.size();
		for(int i=0;i<n;i++) sum+=stones[i];
	
		if(sum%n) return -1;
		
		int res=0;
		sort(stones.begin(),stones.end());

		for(int i=0;i<n;i++){
			if( (sum/n-stones[i])%2 ) return -1;
		}

		for(int i=0;stones[i]<sum/n;i++){
			
			res+=(sum/n-stones[i])%2;
		}

		return res;
	}
};
