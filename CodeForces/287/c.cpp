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

	long long h,n;
	cin>>h>>n;

	n+=((1LL<<h)-1);

	unsigned long long m=n;
	string bin;
	while(m!=0){
		bin+=(m%2+'0');
		m/=2;
	}
	reverse(bin.begin(),bin.end());

	unsigned long long res=1;
	if(bin[1]=='1') res=(1LL<<h);

	for(int i=2;i<bin.size();i++){
		if(bin[i]==bin[i-1]) res+=(1LL<<(h-i+1));
		else res++;
	}

	cout<<res<<endl;

	return 0;

}