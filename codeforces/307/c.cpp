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
bool used1[1000001],used2[1000001];

long long gcd(long long x,long long y)
{
	return y==0 ? x : gcd(y,x%y);
}

long long lcm(long long x,long long y)
{
	return x*y/gcd(x,y);
}

int main(){

	long long m,h1,a1,x1,y1,h2,a2,x2,y2;
	cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;

	used1[h1]=used2[h2]=true;

	vector<long> vh1,vh2;
	vh1.push_back(h1);
	vh2.push_back(h2);
	bool ok1=false,ok2=false;

	while(!ok1 || !ok2){
		h1=(x1*h1+y1)%m;
		h2=(x2*h2+y2)%m;
		if(used1[h1]) ok1=true;
		else if(!ok1){used1[h1]=true; vh1.push_back(h1);}
		if(used2[h2]) ok2=true;
		else if(!ok2){used2[h2]=true; vh2.push_back(h2);}
	}
	
	long long num=lcm((long long)vh1.size(),(long long)vh2.size());
	for(long long i=0;i<num;i++){
		if(vh1[i%vh1.size()]==a1 && vh2[i%vh2.size()]==a2){
			cout<<i<<endl; 
			return 0;
		}
	}
	
	cout<<-1<<endl;

	return 0;

}