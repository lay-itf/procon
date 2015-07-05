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

class CorruptedMessage
{
public:
string reconstructMessage(string s, int k){
	int cnt[26]={0};
	for(int i=0;i<s.size();i++) cnt[s[i]-'a']++;

	string res;
	for(int i=0;i<26;i++){
		if(cnt[i]+k==s.size()){		
			for(int j=0;j<s.size();j++) res+=(char)('a'+i);
			break;
		}
	}

	return res;

}
};