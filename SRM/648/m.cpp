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
#include <queue>

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class TravellingSalesmanEasy
{
public:
	
int getMaxProfit(int M, vector <int> profit, vector <int> city, vector <int> visit){

	int res=0;
	priority_queue<int> q[201];

	for(int i=0;i<city.size();i++){
		q[city[i]].push(profit[i]);
	}

	for(int i=0;i<visit.size();i++){
		int pro=0;
		if(!q[visit[i]].empty()){
			pro=q[visit[i]].top();
			q[visit[i]].pop();
		}
		res+=pro;
	}

	return res;

}
};