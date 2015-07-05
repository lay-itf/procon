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

class BoundingBox
{
public:
	int smallestArea(vector <int> X, vector <int> Y){
		long long res=(*max_element(X.begin(),X.end() - *min_element(X.begin(),X.end())*(*max_element(Y.begin(),Y.end() - *min_element(Y.begin(),Y.end());
		return res;
	}
};
