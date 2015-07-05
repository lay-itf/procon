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

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

int f(int num){
	int res=1;
	for(int i=2;i<=num;i++) res*=i;
	return res;
}


class NarrowPassage2Easy
{
public:
set<vector<pair<int,int> > > ans;
vector< pair<int, int> > vp;
int n,m;

void func(){
	for(int i=0;i<n-1;i++){
		if(vp[i].first+vp[i+1].first<=m){
			swap(vp[i],vp[i+1]);
			if(ans.find(vp)==ans.end()){
				ans.insert(vp);
				func();
			}
			swap(vp[i],vp[i+1]);
		}
	}
}

int count(vector <int> size, int maxSizeSum){

		n=size.size();
		m=maxSizeSum;
		vp.resize(n);
		for(int i=0;i<n;i++) vp[i]=make_pair(size[i],i);

		ans.insert(vp);
		func();

		return ans.size();
	}
};


