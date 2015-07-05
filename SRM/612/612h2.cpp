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

class PowersOfTwo
{
public:
	long long count(vector<long long> powers){

		set<long long> nums;
		nums.insert(0);

		for(int i=0;i<powers.size();i++){
			set<long long> tmp;
			set<long long>::iterator it = nums.begin();
			while(it!=nums.end()){
				tmp.insert(powers[i]+(*it));
				it++;
			}
			it = tmp.begin();
			while(it!=tmp.end()){
				nums.insert(*it);
				it++;
			}
		}

		return nums.size();

	}
};
