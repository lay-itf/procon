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
MountainRanges
{
public:
	
int countPeaks(vector <int> heights){

		int res=0;
		const int n=heights.size();

		if(n==1) return 1;

		if(heights[0]>heights[1]) res++;

		for(int i=1;i<n-1;i++){
			cout<<i<<endl;
			if(heights[i-1]<heights[i] && heights[i]>heights[i+1]) res++;
		}

		cout<<heights[n-2]<<heights[n-1]<<n<<endl;
		if(n>1 && heights[n-2]<heights[n-1]) res++;

		return res;

	}
};
