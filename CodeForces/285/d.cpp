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
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>

using namespace std; 

//ind=res[0]!+res[1]!+...
void toInd(vector<long> &perm, vector<long> &res){
	vector<bool> used(perm.size(),false);

	for(long i=0;i<perm.size();i++){
		for(int j=1;j<perm[i];j++){
			if(!used[j]){cout<<perm.size()-i<<"! "; res.push_back(perm.size()-i);}
		}
		used[perm[i]]=true;
	}

}

int main(){

	long n;
	cin>>n;

	vector<long> v1,v2,ind1,ind2;
	for(long i=0;i<n;i++){
		long a;
		scanf("%ld",&a);

		v1.push_back(a);
	}
	for(long i=0;i<n;i++){
		long b;
		scanf("%ld",&b);
		v2.push_back(b);
	}

	toInd(v1,ind1);




}