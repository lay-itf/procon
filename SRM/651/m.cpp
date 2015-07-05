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
#include <map>

using namespace std;

class FoxAndSouvenirTheNext
{
public:

	string ableToSplit(vector <int> value){
		map<int,vector<int> > res;
		int sum=0;
		for(int i=0;i<value.size();i++) sum+=value[i];

		if(value.size()%2 || sum%2) return "Impossible";

		for(unsigned long long s=0;s<(1LL<<(value.size()/2));s++ ){
			int num=0,L=0;

			for(int i=0;i<value.size()/2;i++){
				if(((1<i) & s)){
					num++;
					L+=value[i];
				}
			}
			res[L].push_back(num);
		}
		for(unsigned long long s=0;s<(1LL<<(value.size()/2));s++ ){
			int num=0,L=0;

			for(int i=0;i<value.size()/2;i++){
				if(((1<i) & s)){
					num++;
					L+=value[i+value.size()/2];
				}
			}
			for(int i=0;i<res[L].size();i++){
				if(res[L][i]+num==value.size()/2) return "Possible";
			}
		}
		return "Impossible";
	}
};