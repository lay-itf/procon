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

class MiddleCode
{
public:
	string encode(string s){
		string t;

		for(;!s.empty();){
			if(s.size()%2){t+=s[s.size()/2]; s.erase(s.begin()+s.size()/2,s.begin()+s.size()/2+1);}
			else{
				int n;
				if(s[s.size()/2] <= s[s.size()/2-1]) n=s.size()/2;
				else n=s.size()/2-1;
				t+=s[n]; s.erase(s.begin()+n,s.begin()+n+1);
			}
					
		}

		return t;

	}
};

int main(){
	cout<<1/2+1/2+1/2<<endl;

	return 0;
}

