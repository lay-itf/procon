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

using namespace std; 

template <typename T>
class UF{
public:
	vector<T> par,rank;

	UF(T n){
		par.resize(n);
		rank.resize(n);
		for(T i=0;i<n;i++){
			par[i]=i;
			rank[i]=0;
		}
	}

	T find(T x){
		if(par[x]==x)
			return x;
		else
			return par[x]=find(par[x]);
	}

	void unite(T x, T y){
		x=find(x);
		y=find(y);
		if(x==y) return;

		if(rank[x]<rank[y])
			par[x]=y;
		else{
			par[y]=x;
			if(rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(T x, T y){
		return find(x)==find(y);
	}

};

int main(){

	int n,m;
	cin>>n>>m;

	vector< UF<int> > uf(m,UF<int>(n));

	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a--; b--; c--;

		uf[c].unite(a,b);

	}

	int q;
	cin>>q;

	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		a--; b--;
		int res=0;
		for(int j=0;j<m;j++){
			if(uf[j].same(a,b)) res++;
		}
		cout<<res<<endl;
	}

}