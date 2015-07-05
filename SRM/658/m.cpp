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
#include <map>

using namespace std;

const int dy[]={-1,1,0,0};
const int dx[]={0,0,-1,1};

int dp[61][61][61];

int da[]={1,1,3,3,9,9};
int db[]={3,9,1,9,1,3};
int dc[]={9,3,9,1,3,1};

int rec(int a,int b,int c)
{
	//cout<<a<<" "<<b<<" "<<c<<endl;
	
	
	if(a==0 && b==0 && c==0) return 0;
	if(dp[a][b][c]!=0) return dp[a][b][c];

	int res=60000;
	for(int i=0;i<6;i++){
		int ta=max(0,a-da[i]);
		int tb=max(0,b-db[i]);
		int tc=max(0,c-dc[i]);
		vector<int> tmp{ta,tb,tc};
		sort(tmp.begin(),tmp.end());
		
		res=min(res,1+rec(tmp[0],tmp[1],tmp[2]));
	}
	return dp[a][b][c]=res;
	
}

class MutaliskEasy
{
public:
int minimalAttacks(vector <int> x){

	while(x.size()!=3) x.push_back(0);
	return rec(x[0],x[1],x[2]);

}
};

int main()
{
	vector<int> v{54,18,6};
	MutaliskEasy test;
	cout<<test.minimalAttacks(v)<<endl;
}