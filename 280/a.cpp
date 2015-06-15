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
	cin>>n;

	long res=0,used=0;
	for(long i=1;;i++){
		used+=i*(i+1)/2;
		if(used<=n) res++;
		else break;
	}
	cout<<res<<endl;
}