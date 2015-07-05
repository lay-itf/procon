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
Jumping
{
public:
	
string ableToGet(int x, int y, vector <int> L){

		int n=L.size();

		if(n==1){
			if(x*x+y*y==L[0]*L[0]) return "Able";
			else return "Not able";
		}

		unsigned long long sum=0;
		for(int i=0;i<n;i++) sum+=L[i];

		for(int i=0;i<n;i++){
			unsigned long long SL1=0,SL2=0;
			for(int j=0;j<i;j++) SL1+=L[j];
			SL2=sum-SL1;

			cout<<"SL1="<<SL1<<" SL2= "<<SL2<<endl;
			cout<<(SL1-SL2)*(SL1-SL2)<<"<="<<x*x+y*y<<endl;
			cout<<(SL1+SL2)*(SL1+SL2)<<">="<<x*x+y*y<<endl<<endl;

			if( (SL1-SL2)*(SL1-SL2)<=x*x+y*y
				&& (SL1+SL2)*(SL1+SL2)>=x*x+y*y) return "Able";
		}	
		return "Not able";

	}
};
