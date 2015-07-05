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

class MagicalStringDiv2
{
public:
	int minimalMoves(string S){
		int res=0;

		for(int i=0;i<S.size()/2;i++) if(S[i]=='<') res++;
		for(int i=S.size()/2;i<S.size();i++) if(S[i]=='>') res++;
		

		return res;

	}
};
