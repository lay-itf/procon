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

	string x;
	cin>>x;


	if(x[0]!='9' && x[0]>='5') x[0]='9'-x[0]+'0';
	for(int i=1;i<x.size();i++){
		if(x[i]>='5') x[i]='9'-x[i]+'0';
	}

	cout<<x<<endl;

	return 0;

}