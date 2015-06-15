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
	
	for(int i=0;i<n;i++){
		int res=1;
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(a[i]<a[j]) res++;
		}
		cout<<res<<" ";
	}
	cout<<endl;

	return 0;

}