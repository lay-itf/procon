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

class OneEntrance
{
public:
	int count(vector <int> a, vector <int> b, int s){
		int res=0,n=a.size();

		if(n==0) return 1;

		vector<int> p;
		for(int i=0;i<n+1;i++){
			if(i==s) continue;
			p.push_back(i);
		}

		do{
//			cout<<"p=[";
//			for(int i=0;i<p.size();i++) cout<<p[i];
//			cout<<"]"<<endl;
			vector<int> deg(n+1);
			for(int i=0;i<n;i++){deg[a[i]]++; deg[b[i]]++;}

			bool ok=true;
			for(int i=0;i<p.size() && ok;i++){

				if(deg[p[i]]!=1) ok=false;
				else{
					for(int j=0;j<n;j++){
						if(a[j]==p[i]) deg[b[j]]--;
						if(b[j]==p[i]) deg[a[j]]--;
					}
				}

			}
			if(ok){res++;}

		}while(next_permutation(p.begin(),p.end()));

		return res;
	}
};

int main(){

	OneEntrance test;

	int a[]={7, 4, 1, 0, 1, 1, 6, 0},b[]={6, 6, 2, 5, 0, 3, 8, 4};

	vector<int> aa(a,a+8),bb(b,b+8);

	cout<<test.count(aa,bb,4)<<endl;

	return 0;
}
