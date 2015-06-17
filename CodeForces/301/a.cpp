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

	int n;
	string s1,s2;
	cin>>n>>s1>>s2;
	
	int res=0;
	for(int i=0;i<n;i++){
		int tmp=abs(s1[i]-s2[i]);
		if(tmp>5) tmp=10-tmp;
		res+=tmp;
	}
	
	cout<<res<<endl;
	
	return 0;

}