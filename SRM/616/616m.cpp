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

class ColorfulCoinsEasy
{
public:
	string isPossible(vector <int> values){

		const int n=values.size();
		const long m=values[n-1]*n*n;

		cout<<"n="<<n<<" m="<<m<<endl;

		for(long i=1;i<=m;i++){
			long x=i;
			bool used[10000]={false};
			bool f=true;
			for(int j=n-1;j>=0;j--){
				if((x/values[j])==0 || used[x/values[j]]){f=false; break;}
				used[x/values[j]]=true;
				x%=values[j];
			}
			if(f){cout<<i<<endl; return "Possible";}
		}

		return "Impossible";

	}
};
