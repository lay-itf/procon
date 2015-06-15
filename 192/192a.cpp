#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>

using namespace std;


int main()
{
	int c,r,res=0,count=0;
	string s,*map,*map_t;

	cin>>r>>c;

	map=new string[r];

	for(int i=0;i<r;i++){
		cin>>map[i];
	}

	for(int i=0;i<r;i++){
		if(map[i].find("S")==string::npos){
			res+=c;
			count++;
		}
	}

	map_t=new string[c];
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			map_t[i]+=map[j][i];
		}
	}

	for(int i=0;i<c;i++){
		if(map_t[i].find("S")==string::npos){
			res+=r-count;
		}
	}

	cout<<res<<endl;

	return 0;

}