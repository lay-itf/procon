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

int gcd(int x,int y){
	return y==0? x:gcd(y,x%y);
}
int lcm(int x,int y){
	return x*y/gcd(x,y);
}


set<string> ss;

void cycle(string s)
{
	for(int i=0;i<s.size();i++){
		ss.insert(s);
		char tmp=s[0];
		s.erase(s.begin());
		s+=tmp;
	}
}

class 
PrivateD2party
{
public:
int getsz(vector <int> a){

	const int n=a.size();
	int cnt=0;
	
	vector<int> dis(n,-1);
	for(int i=0;i<n;i++){
		if(a[i]!=i) dis[i]=a[i];
	}
	
	vector<bool> vis(n,false);
	
	for(int i=0;i<n;i++){
		if(vis[i]) continue;
		
		vis[i]=true;
		int pos=i;
		while(pos=dis[pos],pos!=-1){
			if(vis[pos]){
				(i==pos)cnt++;
				break;
			}
			vis[pos]=true;
		}
		
	}
	
	return n-cnt;

}
};