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

class AlienAndPassword
{
public:
	int getNumber(string S){
		set<string> s;

		for(int i=0;i<S.size();i++){
			string tmp=S.substr(0,i)+S.substr(i+1);
			cout<<tmp<<endl;
			s.insert(tmp);
		}

		return s.size();

	}
};

/*
int main(){

	return 0;
}
*/
