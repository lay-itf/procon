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
	cin>>n;
	
	vector<long> t(n);
	for(int i=0;i<n;i++) cin>>t[i];
	
	sort(t.begin(),t.end());
	
	int res=0;
	long long sum=0;
	for(int i=0;i<n;i++){
		if(sum<=t[i]){
			res++;
			sum+=t[i];
		}
	}
	cout<<res<<endl;
}