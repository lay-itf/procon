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

class LostCharacter
{
public:
	
vector <int> getmins(vector <string> str){

	int n=str.size();
	vector<int> res(n,0);

	for(int i=0;i<n;i++){
		vector<string> _str=str;
		for(int j=0;j<n;j++){
			for(int k=0;k<_str[j].size();k++){
				if(_str[j][k]=='?'){
					if(i==j) _str[j][k]='a';
					else _str[j][k]='z';
				}
			}
		}

		for(int j=0;j<n;j++){
			if(i==j) continue;

			if(_str[i]>_str[j]) res[i]++;
		}

	}


	return res;
}
};


