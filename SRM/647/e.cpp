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

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class PeacefulLine
{
public:
	
string makeLine(vector <int> x){

	int age[26]={0};
	for(int i=0;i<x.size();i++) age[x[i]]++;

	int n=(x.size()+1)/2;
	for(int i=0;i<x.size();i++)
		if(age[i]>n) return "impossible";

	return "possible": 

}
};