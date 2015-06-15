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

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	int num[26]={0};
	priority_queue<int> pq;

	string s;
	cin>>s;


	for(int i=0;i<n;i++){
		num[s[i]-'A']++;
	}

	for(int i=0;i<26;i++){
	 	if(num[i]!=0) pq.push(num[i]);
	}

	unsigned long long res=0;
	while(!pq.empty()){
		int tmp=pq.top();
		pq.pop();
//		cout<<tmp<<" "<<k<<endl;
		if(tmp>=k){ res+=k*k; break;}
		else {res+=tmp*tmp; k-=tmp;}

	}


	cout<<res<<endl;
	return 0;
}
