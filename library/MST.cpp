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
#include <queue>
#include <cctype>
#include <climits>
#include <stack>

using namespace std;

typedef long long LL;

class Edge
{
public:

	LL from,to,cost;
	
	Edge(LL _from,LL _to,LL _cost){
		from=_from;
		to=_to;
		cost=_cost;
	}
	
	bool operator<(const Edge& e) const {
		return cost<e.cost;
	}
};

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

class Graph
{
public:
	long long n;
	vector<Edge> ve;
	Graph(vector<Edge> _ve){
		ve=_ve;
		n=ve.size();
		
	}
	
	vector<Edge> kruskal(){
		
		vector<Edge> res;
		sort(ve.begin(),ve.end());
		
		UF<LL> uf(n);
		
		for(LL i=0;i<n;i++){
			Edge e=ve[i];
			if(!uf.same(e.from,e.to)){
				res.push_back(e);
				uf.unite(e.from,e.to);
			}
		}
		
		return res;
	}
};

int main()
{
	int n;
	cin>>n;
	
	vector<Edge> ve;
	for(int i=0;i<n;i++){
		int from,to,cost;
		cin>>from>>to>>cost;
		ve.push_back(Edge(from,to,cost));
	}
	Graph G(ve);
	vector<Edge> res=G.kruskal();
	
	for(int i=0;i<res.size();i++){
		cout<<res[i].from<<" "<<res[i].to<<" "<<res[i].cost<<endl;
	}
	
}
