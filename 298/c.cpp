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

using namespace std; 

int main(){

	long n;
	unsigned long long A;
	cin>>n>>A;

	vector<unsigned long long> d(n);
	vector<unsigned long long> sum(n,0);
	for(long i=0;i<n;i++){
		cin>>d[i];
		sum[i]=d[i];
		if(i!=0) sum[i]+=sum[i-1];
	}
	
//	for(int i=0;i<sum.size();i++) cout<<sum[i]<<" ";
//	cout<<endl;

	if(sum[n-1]==A){
		for(int i=0;i<n;i++) cout<<d[i]-1<<" ";
		cout<<endl;
	}

	cout<<endl;
	return 0;

}