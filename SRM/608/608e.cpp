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

class MysticAndCandiesEasy
{
public:
	int minBoxes(int C, int X, vector <int> high){
		int res=0;

		sort(high.begin(),high.end(),greater<int>());

		for(int i=0;i<high.size() && X>0;i++){
			X-=min(C,high[i]); C-=min(C,high[i]); res++;
			cout<<"C:"<<C<<" X:"<<X<<endl;
		}

		return res;

	}
};
