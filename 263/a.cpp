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

using namespace std;

int main()
{
	int n;
	cin>>n;

	int dx[]={0,0,-1,1};
	int dy[]={-1,1,0,0};

	vector<string> map(n);
//	bool map[1000][1000]={false};

	for(int i=0;i<n;i++){ cin>>map[i];}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
				int res=0;
				for(int k=0;k<4;k++){
					int x=j+dx[k];
					int y=i+dy[k];
					if(x==n || x==-1 || y==n || y==-1) continue;
					if(map[y][x]=='o'){res++;}
				}
				if(res%2){cout<<"NO"<<endl; return 0;}

		}
	}

	 cout<<"YES"<<endl;

	return 0;
}
