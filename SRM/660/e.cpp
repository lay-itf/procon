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

class Cyclemin
{
public:
string bestmod(string s, int k){


	
	cycle(s);
	
	string s2=s;
	int cnt=0;
	for(int i=0;i<s.size() && cnt<k ;i++){
		if(s2[i]!='a'){
			s2[i]='a'; cnt++;
		}
	}
	
	cycle(s2);
	
	for(int i=1;i<s.size();i++){
		s2=s;
		cnt=0;

		for(int j=i;cnt<k;){
			if(s2[j]!='a'){
				s2[j]='a'; cnt++;
			}
			
			j=(j+1)%s.size();
			if(j==i) break;
		}
		
		cycle(s2);
	}
	
	return *ss.begin();

}
};