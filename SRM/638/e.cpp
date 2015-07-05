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

class NamingConvention
{
public:
	
string toCamelCase(string v){

		string res;
		for(int i=0;i<v.size();i++){
			if(v[i]!='_') res+=v[i];
			else{
				i++;
				res+=v[i]-'a'+'A';
			}
		}

		return res;
	}
};
