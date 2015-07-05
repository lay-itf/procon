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
Sortish
{
public:
	
	long long ways(int sortedness, vector <int> seq){

		const int n=seq.size();
		vector<bool> erased(n+1,true);
		erased[0]=false;

		for(int i=0;i<n;i++) erased[seq[i]]=false;

		vector<int> ve;
		for(int i=1;i<=n;i++) if(erased[i]) ve.push_back(i);

		long long res=0;
		do{
			vector<int> seq2=seq;
			int ind=0;
			for(int i=0;i<n;i++){
				if(seq2[i]==0) seq2[i]=ve[ind++];
			}

			int s=0;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(seq2[i]<seq2[j]) s++;
				}
			}

			if(s==sortedness) res++;

		}while(next_permutation(ve.begin(),ve.end()));


		return res;
	}
};
