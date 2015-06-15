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
	int n,res=0;
	string s;
	cin>>n>>s;
	vector<int> L(n,0),R(n,0);

	for(int i=0;i<n;i++){
		if(s[i]=='.') continue;
		else if(s[i]=='L'){
			L[i]++;
			for(int j=i-1;j>=0 && s[j]!='R';j--) L[j]++;
		}else{
			R[i]++;
			for(int j=i+1;j<n && s[j]!='L';j++) R[j]++;
		}
	}
/*
	for(int i=0;i<n;i++) cout<<L[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<R[i]<<" ";
	cout<<endl;
*/
	for(int i=0;i<n;i++){
		if(L[i]==R[i] && L[i]==0) res++;
	}

	int count=0;
	for(int i=0;i<n;i++){
		if(L[i]==R[i] && L[i]==1) count++;
		else if(count%2==1){res++; count=0;}
	}
	cout<<res<<endl;

	return 0;
}