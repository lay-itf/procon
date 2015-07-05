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

class InfiniteString
{
public:
string equal(string s, string t){

	int num=lcm(s.size(),t.size());
	string ss;
	string tt;
	
	for(int i=0;ss.size()<num;i++){
		ss+=s;
	}
	for(int i=0;tt.size()<num;i++){
		tt+=t;
	}
	
	if(ss==tt) return "Equal";
	else return "Not equal";

}
};