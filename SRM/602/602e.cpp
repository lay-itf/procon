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

class TypoCoderDiv2
{
public:
	int count(vector <int> rating){

		int ans=0;

		if(rating[0]>=1200) ans++;

		for(int i=1;i<rating.size();i++){
			if((rating[i-1]>=1200 && rating[i]<1200)
			|| (rating[i-1]<1200 && rating[i]>=1200)) ans++;
		}

		return ans;

	}
};