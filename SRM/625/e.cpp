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

class 
AddMultiply
{
public:
	
vector <int> makeExpression(int y){

		vector<int> v(3);
		if(y==6){
			v[0]=3; v[1]=3; v[2]=y-v[0]*v[1];
		}else if(y==7){
			v[0]=3; v[1]=3; v[2]=y-v[0]*v[1];
		}else{
			v[0]=2; v[1]=3; v[2]=y-v[0]*v[1];
		}

		cout<<v[0]*v[1]+v[2]<<endl;

		return v;

	}
};
