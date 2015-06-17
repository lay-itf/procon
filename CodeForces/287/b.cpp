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

	long long r,x,y,x2,y2;
	cin>>r>>x>>y>>x2>>y2;

	x2-=x; y2-=y;
	x=0; y=0;
	
	long long d2=(x2*x2+y2*y2);
	cout<<ceil(sqrt(d2/(2.0*r)/(2.0*r)))<<endl;

	return 0;

}