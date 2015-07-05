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

const int dy[]={-1,1,0,0};
const int dx[]={0,0,-1,1};

class RandomPancakeStackDiv2
{
public:
double expectedDeliciousness(vector <int> d){

	vector<int> p;
	for(int i=0;i<d.size();i++) p.push_back(i);

	long long sum=0,num=0;
	do{
		num++;

		long long top=p[0]+1;
		sum+=d[p[0]];
		for(int i=1;i<d.size();i++){
			if(top>p[i]+1){
				sum+=d[p[i]];
				top=p[i]+1;
			}else break;
		}


	}while(next_permutation(p.begin(),p.end()));

	return (double)sum/(double)num;
}
};