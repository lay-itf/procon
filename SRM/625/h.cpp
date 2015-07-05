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

class MixingColors
{
public:
	int minColors(vector <int> colors){

		int res1=colors.size();
		vector<int> c=colors;
		const int n=colors.size();
		vector< string > bit(n);
		for(int i=0;i<n;i++) bit[i].resize(30);

		for(int i=0;i<n;i++){
			for(int j=0;j<30;j++){
				bit[i]+=('0'+(c[i]%2));
				c[i]/=2;
				cout<<bit[i][j];

			}
			cout<<endl;
		}

		int res2=0;
		for(int i=0;i<30;i++){
			bool tmp=(bit[0][i]=='1');
			cout<<bit[0][i];
			for(int j=1;j<n;j++){cout<<bit[j][i]; tmp|=(bit[j][i]=='1');}
			if(tmp) res2++;
			cout<<endl;
		}

		return min(res1,res2);

	}
};
