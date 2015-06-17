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
	vector< pair<int,int> > v;
	v.push_back(make_pair(0,0));

	int n,x=0,y=0,max_x=0,min_y=0,max_y=0;
	cin>>n;

	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		x+=a;
		if(i%2==0) y+=a;
		else y-=a;
		v.push_back(make_pair(x,y));

		max_x=max(x,max_x);
		max_y=max(y,max_x);
		min_y=min(y,min_y);

	}

	vector<string> map(max_y-min_y+10);
	for(int i=0;i<map.size();i++) map[i].resize(max_x,' ');

	int pos_x=0,pos_y=max_y;
	for(int i=1;i<n+1;i++){
		for(int j=0;j<v[i].first-v[i-1].first;j++){
			if(i%2) map[pos_y--][pos_x++]='/';
			else map[pos_y++][pos_x++]='\\';

			if(j==v[i].first-v[i-1].first-1 && i%2) pos_y++;
			if(j==v[i].first-v[i-1].first-1 && i%2==0) pos_y--;
		}

	}

	for(int i=0;i<map.size();i++){
		if(count(map[i].begin(),map[i].end(),' ')==map[i].size()) continue;
		cout<<map[i]<<endl;
	}
	return 0;
}
