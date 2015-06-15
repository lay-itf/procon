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

using namespace std;

vector<int> p;
int pp;

int get_p(int d){

	for(;pp>=0;pp--) if(d>p[pp]){ return p[pp];}
	return p[0];

}

int main()
{
	int n;
	cin>>n;

	vector<int> a(n);
	vector<int> b,e;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	p.push_back(2);
	p.push_back(3);

	for(int i=5;i<=n+10;i+=2){
		bool f=true;
		for(int j=0;j<p.size()&&f;j++){
			if(i%p[j]==0) f=false;
		}
		if(f){p.push_back(i);}
	}

	for(int i=0;i<n;i++){
		pp=p.size()-1;
		int pos=0;
		for(int j=1;i+j<n;j++){
			if(a[pos]<a[j]) pos=j;
		}

		if(pos==n-i-1) continue;

		while(true){
			int d=(n-i-1)-pos+1;
			int next=get_p(d);

			b.push_back(pos+1);
			e.push_back(next+pos-1+1);

//			cout<<pos+1<<" "<<next+pos-1+1;

			swap(a[pos],a[next+pos-1]);
//			cout<<endl;

			if(d==next) break;
			pos=next+pos-1;
		}
	}

	cout<<b.size()<<endl;
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<" "<<e[i]<<endl;
	}

	return 0;
}
