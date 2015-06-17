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

	long long a,b,s;
	cin>>a>>b>>s;

	s-=abs(a); s-=abs(b);

	if(s<0 || s%2) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;

	return 0;

}