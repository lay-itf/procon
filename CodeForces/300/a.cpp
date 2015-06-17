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

	string code="CODEFORCES";

	string s;
	cin>>s;

	if(s.size()<10) cout<<"NO"<<endl;
	else{
		bool ok=false;
		if(s.substr(0,10)==code) ok=true;
		if(s.substr(s.size()-10,10)==code) ok=true;

		for(int i=1;i<10;i++){
			if(s.substr(0,i)+s.substr(s.size()-10+i,10-i)==code) ok=true;
		}

		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;

}