#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>

using namespace std;

class SplitIntoPairs
{
public:
	int makepairs(vector <int> A, int X){

		int ans=0;
		vector<int> n,p;

		for(int i=0;i<A.size();i++){
			if(A[i]>0) p.push_back(A[i]);
			else if(A[i]<0) n.push_back(A[i]);
		}

		sort(p.begin(),p.end());
		sort(n.begin(),n.end(),greater<int>());

		int i=0;
		for(;i<min(p.size(),n.size()) && n[i]*p[i]>=X;i++);

		ans+=n.size()/2;
		ans+=p.size()/2;
		ans+=i;
		return ans;
	}
};

int main(){
	SplitIntoPairs test;
	vector<int> v;

	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(6);
	v.push_back(-6);
	v.push_back(-4);
	v.push_back(-10);
	v.push_back(-1);
	v.push_back(-9);



	cout<<test.makepairs(v,-2)<<endl;
}
