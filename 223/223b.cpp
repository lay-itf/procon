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

int main()
{
	long long m;
	vector<int> b;
	set<int, greater<int> > s;
	cin>>m;

	for(long long i=0;i<m;i++){
		int tmp;
		cin>>tmp;
		b.push_back(tmp);
	}

	sort(b.begin(),b.end());

	int c=0;
	for(long long i=1;i<m;i++){
		if(b[i]==b[i-1]){s.insert(b[i-1]); b[i-1]=-1; c++;}
	}

	int check=0;
	set<int>::iterator it2=s.begin();
	if(*it2==b[b.size()-1]){it2++; check++;}

	cout<<b.size()+s.size()-c-check<<endl;
	for(long long i=0;i<m;i++){
		if(b[i]!=-1) cout<<b[i]<<" ";
	}

	while(it2!=s.end()){ cout<<*it2<<" "; it2++;}

	cout<<endl;

	return 0;

}
