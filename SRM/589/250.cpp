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

class GearsDiv2
{
public:
	int getmin(string S){

		const int N=S.size();
		int i=0;
		while(i<N){
			if(S[i]!='X'&&S[i]==S[(i+1)%N]){ S[(i+1)%]='X'; i=0; continue;}
			i++;
		}

		cout<<S<<endl;

		return count(S.begin(),S.end(),'X');
	}
};


