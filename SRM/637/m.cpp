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
#include <queue>

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

int dy[]={-1,1,0,0};
int dx[]={0,0,-1,1};

class 
PathGameDiv2
{
public:
	
	int calc(vector <string> board){


		const int n=board[0].size();


		if(n==1){
			if(board[0][0]=='.' && board[1][0]=='.') return 1;
			else return 0;
		}
		

		int res=0;

		int b=0;
		for(int i=0;i<n;i++){
			if(board[0][i]=='#') b++;
			if(board[1][i]=='#') b++;
		}


		vector< vector<int> > d(2,vector<int>(n,-1)),dd(2,vector<int>(n,-1));
		d[0][0]=0;

		queue<pair<int,int> > q,qq;
		q.push(make_pair(0,0));

		if(board[0][0]=='.') while(!q.empty()){
			int y=q.front().first;
			int x=q.front().second;
			q.pop();
			bool f=false;

			for(int i=0;i<4;i++){

				if(x+dx[i]<0 || x+dx[i]>n-1 || y+dy[i]<0 || y+dy[i]>1) continue;

				if(board[y+dy[i]][x+dx[i]]=='.' && d[y+dy[i]][x+dx[i]]==-1){
					d[y+dy[i]][x+dx[i]]=d[y][x]+1;
					if(x+dx[i]==n-1){
						res=max(res,2*n-b-1-d[y][x]-1);
						f=true;
						break;
					}
					q.push(make_pair(y+dy[i],x+dx[i]));
				}
			}
			if(f) break;

		}

		qq.push(make_pair(1,0));
		dd[1][0]=0;

		if(board[1][0]=='.')while(!qq.empty()){
			int y=qq.front().first;
			int x=qq.front().second;
			qq.pop();

			bool f=false;

			for(int i=0;i<4;i++){

				if(x+dx[i]<0 || x+dx[i]>n-1 || y+dy[i]<0 || y+dy[i]>1) continue;

				if(board[y+dy[i]][x+dx[i]]=='.' && dd[y+dy[i]][x+dx[i]]==-1){
					dd[y+dy[i]][x+dx[i]]=dd[y][x]+1;
					if(x+dx[i]==n-1){
						res=max(res,2*n-b-1-dd[y][x]-1);
						f=true;
						break;
					}
					qq.push(make_pair(y+dy[i],x+dx[i]));
				}
			}
			if(f) break;

		}

		return res;

	}
};
