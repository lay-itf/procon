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

class TheShuttles
{
public:
	int getLeastCost(vector <int> cnt, int baseCost, int seatCost){

		vector<int> cost;
		
		for(int i=1;i<=100;i++){
			int num=0;
			for(int j=0;j<cnt.size();j++) num+=ceil((double)cnt[j]/i);

			cout<<num<<endl;

			cost.push_back(i*seatCost*num+baseCost*num);
		}

		return *min_element(cost.begin(),cost.end());

	}
};


