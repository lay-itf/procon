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

	int n,k,p,x,y;
	cin>>n>>k>>p>>x>>y;
	
	vector<int> a(n);
	long long sum=0,cnt=0;
	for(int i=0;i<k;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]>=y) cnt++;
	}
	for(int i=k;i<n;i++){
		if(cnt*2 > n) a[i]=1;
		else{a[i]=y; cnt++;}
		sum+=a[i];
	}
	
	if(sum>x || cnt*2<n) cout<<-1<<endl;
	else{
		for(int i=k;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	
	
	return 0;

}