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

//a^b mod m
int modpow(int a,int b,int m){
	int res=1;

	while(b>0){
		if((b&1)==1) res=(res*a)%m;
		b >>=1;
		a=(a*a)%m;
	}
	return res;
}
/*
k=4
x^0001 * x^0010 * x^0100 * x^1000 = x^1111 = x^(2^k-1)???
*/
class 
Powerit
{
public:
int calc(int n, int k, int m){

	long long res=0;
	
	vector<long long> memo(n+1);
	for(int i=1;i<=n;i++){
		cout<<i<<i<<endl;
		bool prime=true;
		for(int j=2;j*j<=i && prime ;j++){
			if(i%j==0){
				cout<<(memo[j]*memo[i/j])%m<<endl;				
				res+=(memo[j]*memo[i/j])%m;
				res%=m;
				prime=false;
			}
		}
		
		if(!prime) continue;
		
		vector<long long> v(k);
		v[0]=i;
		for(int j=1;j<k;j++){
			v[j]=(v[j-1]*v[j-1])%m;
		}
		
		long long x=1;
		for(int j=0;j<k;j++){
			x*=v[j];
			x%=m;
		}
		
		cout<<x<<endl;
		
		memo[i]=x;
		res+=x;
		res%=m;
		
	}
	
	return (int)res;
	
}
};