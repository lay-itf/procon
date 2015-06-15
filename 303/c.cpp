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

const int dy[]={-1,1,0,0};
const int dx[]={0,0,-1,1};



int main(){

	int r,c;
	cin>>r>>c;
	
	vector<string> t(r);	
	for(int i=0;i<r;i++) cin>>t[i];
	
	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	r1--; c1--; r2--; c2--;
	
	vector<vector<long> > vis(r,vector<long>(c,0));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++) if(t[i][j]=='X') vis[i][j]++;
	}
	
	queue<pair<int,int> >q;
	q.push(make_pair(r1,c1));
	while(!q.empty()){
		pair<int,int> pos=q.front(); q.pop();
		for(int i=0;i<4;i++){
			int ny=pos.first+dy[i],nx=pos.second+dx[i];
			if(0<=ny && ny<r && 0<=nx && nx<c){
				if(vis[ny][nx]==0){
					vis[ny][nx]++;
					q.push(make_pair(ny,nx));
				}else if(vis[ny][nx]==1){
					vis[ny][nx]++;
					if(ny==r2 && nx==c2){cout<<"YES"<<endl; return 0;}
				}
			}
		}
	}
	
	cout<<"NO"<<endl;
}