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

class PalindromicSubstringsDiv2
{
public:
	int count(vector <string> S1, vector <string> S2){
		string s;
		int res=0;
		for(int i=0;i<S1.size();i++){ if(S1[i]!="") s+=S1[i];}
		for(int i=0;i<S2.size();i++){ if(S2[i]!="") s+=S2[i];}

		res+=s.size();

		for(int len=2;len<=s.size();len++){
			for(int i=0;i+len<=s.size();i++){
				string tmp=s.substr(i,len);
				bool f=true;
				for(int j=0;j<tmp.size()/2&&f;j++){if(tmp[j]!=tmp[tmp.size()-j-1]) f=false;}
				
				if(f) res++;
			}
		}

		return res;
	}
};
