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

class ORSolitaireDiv2
{
public:
	int getMinimum(vector<int> numbers, int goal){

		int ans=0;

		for(int i=0;i<numbers.size();i++) if(numbers[i]<=goal && numbers[i]%2) ans++;

		return ans;

	}
};


