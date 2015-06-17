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

using namespace std;

bool prime[1000001];

int main()
{	
	unsigned long long n;
	cin>>n;

	for(unsigned long long i=0;i<=n;i++)prime[i]=true;
	prime[0]=prime[1]=false;

	for(unsigned long long i=2;i*i<=n;i++){

		if(prime[i]){
			int j=2*i;
			while(j<=n){prime[j]=false; j+=i;}
		}
	}

	for(unsigned long long i=4;i<=n/2;i++){
		if(!prime[i] && !prime[n-i])
		{cout<<i<<" "<<n-i<<endl; break;}
	} 

	return 0;
}
