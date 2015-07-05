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
#include <sstream>

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class TwoWaysSorting
{
public:
	string sortingMethod(vector <string> stringList){

		bool a,b;

		vector<string> sl=stringList;

		sort(sl.begin(),sl.end());

		a=true;
		for(int i=0;i<sl.size()&&a;i++){
			if(sl[i]!=stringList[i]) a=false;
		}

		b=true;
		for(int i=0;i<sl.size()-1&&b;i++){
			if(stringList[i].size()>=stringList[i+1].size()) b=false;
		}

		if(a&&b) return "both";
		if(a&&!b) return "lexicographically";
		if(b&&!a) return "lengths";
		return "none";

	}
};
