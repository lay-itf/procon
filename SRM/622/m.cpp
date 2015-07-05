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

class BoxesDiv2
{
public:
	int findSize(vector <int> c){

		int res=0;
		for(int i=0;i<c.size();i++){
		
			int tmp=ceil(log(c[i])/log(2.0));
		
			res+=(int)pow(2.0,(double)tmp);
		}

		int tmp=ceil(log(res)/log(2.0));

		res=(int)pow(2.0,(double)tmp);

		return res;

	}
};
