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

class PackingBallsDiv2
{
public:
	int minPacks(int R, int G, int B){
		int res=0;

		res+=R/3;
		res+=G/3;
		res+=B/3;

		R%=3; G%=3; B%=3;

		while(R>0 && G>0 && B>0){
			res++;
			R--; G--; B--;
		}

		res+=(R>0)+(B>0)+(G>0);

		return res;

	}
};
