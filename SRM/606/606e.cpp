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

class EllysSubstringSorter
{
public:
	string getMin(string S, int L){
		set<string> s;

		for(int i=0;i+L<=S.size();i++){
			string tmp=S.substr(i,L);
			sort(tmp.begin(),tmp.end());
			tmp=S.substr(0,i)+tmp+S.substr(i+L);
			cout<<tmp<<endl;
			s.insert(tmp);
		}

		return *s.begin();


	}
};


int main(){
	EllysSubstringSorter test;

	cout<<test.getMin("AAAAAAAAAAAAAAAAAACB",13)<<endl;

	return 0;

}