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
	
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	
	long long res=0;
	for(int i=1;i<n;i++){
		if(a[i-1]>=a[i]){
			res+=a[i-1]-a[i]+1;
			a[i]=a[i-1]+1;
		}
		//for(int j=0;j<a.size();j++) cout<<a[j]<<" ";
		//cout<<endl;
	}
	cout<<res<<endl;
	
	return 0;

}