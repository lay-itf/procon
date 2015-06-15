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
	
	queue<int> a,b;
	int k1;
	cin>>k1;
	for(int i=0;i<k1;i++){
		int c;
		cin>>c;
		a.push(c);
	}

	int k2;
	cin>>k2;
	for(int i=0;i<k2;i++){
		int c;
		cin>>c;
		b.push(c);
	}	
	
	int win;
	for(long i=0;i<(1LL<<20);i++){
				
		if(a.empty() || b.empty()){
			cout<<i<<" "<<win<<endl;
			return 0;
		}
		
		int c1=a.front(); a.pop();
		int c2=b.front(); b.pop();
		
		//cout<<c1<<" "<<c2<<endl;
		
		if(c1>c2){
			win=1;
			a.push(c2);
			a.push(c1);
		}else{
			win=2;
			b.push(c1);
			b.push(c2);			
		}
	}
	
	cout<<-1<<endl;
	
	return 0;

}