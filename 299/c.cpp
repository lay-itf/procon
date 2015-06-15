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
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>

using namespace std; 

long long A,B;
long long l,t,m;

unsigned long long sum(unsigned long long num)
{
	unsigned long long a=A+(l-1)*B;
	return num*(2*a-(num-1)*B)/2;
}

long long calc()
{
	if(sum(1)>t) return -1;

	unsigned long long left=1,right=B*B;

	for(int i=0;i<100;i++){
		unsigned long long mid=(left+right)/2;
		if(sum(mid)>m*t || sum(mid)-sum(mid-1)>t) right=mid;
		else left=mid;
	}

	cout<<sum(right)<<" "<<sum(left)<<endl;

	if(sum(right)<=m*t && sum(right)-sum(right-1)<=t) return right;
	else return left;
}

int main(){

	long n;
	cin>>A>>B>>n;

	for(long i=0;i<n;i++){
		cin>>l>>t>>m;

		cout<<calc()<<endl;

	}

	return 0;

}