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

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

int main()
{
	long  n,k;
	vector<long> p;
	cin>>n>>k;
	p.push_back(2); p.push_back(3);

	if(n==1 && k==0){cout<<1<<endl; return 0;}

	if(n/2>k || n==1){ cout<<-1<<endl; return 0;}

	for(long i=5;p.size()!=n+4;i+=2){
		bool f=true;;
		for( long j=0;p[j]*p[j]<=i && f;j++){
			if(i%p[j]==0){
				f=false;
			}
		}
		if(f) p.push_back(i);
	}

	if(k-n/2==0 || n==1){
		for(long i=0;i<n;i++) printf("%ld ",p[i]);
	}else{
		long  num=k-n/2;
		printf("%ld %ld ",num+1,(num+1)*2);

		for(long i=0;i<n-2;i++){
			if(p[i]==num+1){n++; continue;}
			printf("%ld ",p[i]);
		}
	}
	cout<<endl;

	return 0;
}
