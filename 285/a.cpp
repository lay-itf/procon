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

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	int m=max((3*a)/10,a-a/250*c),v=max((3*b)/10,b-b/250*d);

	if(m>v) cout<<"Misha"<<endl;
	else if(m<v) cout<<"Vasya"<<endl;
	else cout<<"Tie"<<endl;

}