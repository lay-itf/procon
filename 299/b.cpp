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

int main(){

	string n;
	cin>>n;

	long long res=0;
	long long tmp=1;
	for(int i=n.size()-1;i>=0;i--){
		if(n[i]=='4') res+=tmp;
		else res+=2*tmp;
		tmp*=2;
	}

	cout<<res<<endl;

	return 0;

}