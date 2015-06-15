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

unsigned long long search(unsigned long long res,vector<unsigned long long> m,string LU, string SU,vector<string> L, vector<string> S, int index){

	if(SU==S[index]) return res;

	for(unsigned int i=0;i<L.size();i++){
		if(L[i]==S[index]) return search(res*m[i],m,LU,SU,L,S,i);
	}

	return 0;
}

int main()
{
	int n;
	unsigned long long res,tmp_n;
	string tmp_s,LU,SU;
	vector<unsigned long long> m;
	vector<string> L,S,U;

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>tmp_s;
		L.push_back(tmp_s);
		if(find(U.begin(),U.end(),tmp_s)==U.end()) U.push_back(tmp_s);

		cin>>tmp_n;
		m.push_back(tmp_n);

		cin>>tmp_s;
		S.push_back(tmp_s);
		if(find(U.begin(),U.end(),tmp_s)==U.end()) U.push_back(tmp_s);
	}

	for(unsigned int i=0;i<U.size();++i){
		if(find(L.begin(),L.end(),U[i])==L.end()) SU=U[i];
		if(find(S.begin(),S.end(),U[i])==S.end()) LU=U[i];
	}

	for(unsigned int i=0;i<L.size();i++){
		if(L[i]!=LU) continue;
		res=search(m[i],m,LU,SU,L,S,i);
		if(res!=0) break;
	}


	cout<<1<<LU<<"="<<res<<SU<<endl;

	return 0;

}
