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

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

int main(){

	int n,k;
	cin>>n>>k;
	
	string S;
	for(int i=0;i<n;i++) S+='S';
	
	int L=0;
	vector<string> ans(n,S);

	while(L<k){
		bool loop=false;
		for(int i=0;i<n && !loop;i++){
			for(int j=0;j<n && !loop;j++){
				if(ans[i][j]=='L') continue;
				
				bool ok=true;
				for(int m=0;m<4;m++){
					int ny=i+dy[m],nx=j+dx[m];
					if(ny<0 || n<=ny || nx<0 || n<=nx) continue;
					if(ans[ny][nx]=='L') ok=false;				
				}
				if(ok){L++; ans[i][j]='L'; loop=true;}
			}
		}
		
		if(L==k || !loop) break;
	}
	
	
	if(L==k){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++) cout<<ans[i]<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;

}