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

	int n,m,q;
	cin>>n>>m>>q;
	vector<vector<int> > cell(n,vector<int>(m));
	vector<int> score(n,0);

	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>cell[i][j];
	}
	
	for(int i=0;i<n;i++){
		int tmp=0;
		if(cell[i][0]==1) tmp++;
		for(int j=1;j<m;j++){
			if(cell[i][j]==1 && cell[i][j-1]==1) tmp++;
			else{
				score[i]=max(score[i],tmp);
				if(cell[i][j]==1) tmp=1;
				else tmp=0;
			}
		}
		score[i]=max(score[i],tmp);
		//cout<<score[i]<<endl;
	}

	
	for(int i=0;i<q;i++){
		int x,y;
		cin>>y>>x;
		y--; x--;
		cell[y][x]=(cell[y][x]+1)%2;
		
		score[y]=0;

/*		
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++) cout<<cell[j][k]<<" ";
			cout<<endl;
		}
*/
		
		int tmp=0;
		if(cell[y][0]==1) tmp++;
		for(int j=1;j<m;j++){
			if(cell[y][j]==1 && cell[y][j-1]==1) tmp++;
			else{
				score[y]=max(score[y],tmp);
				if(cell[y][j]==1) tmp=1;
				else tmp=0;
			}
		}
		score[y]=max(score[y],tmp);
		int res=score[0];
		for(int j=1;j<n;j++) res=max(res,score[j]);
		cout<<res<<endl;
		
	}

	return 0;

}