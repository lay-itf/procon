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
	string a,b;
	cin>>a>>b;

	int A[26]={0},B[26]={0};

	for(int i=0;i<a.size();i++) A[a[i]-'a']++;
	for(int i=0;i<b.size();i++) B[b[i]-'a']++;

	int res=0;

	for(int i=0;i<26 && res!=-1;i++){
		if(A[i]==0 && B[i]!=0){res=-1; break;}
		res+=min(A[i],B[i]);
	}

	if(res==0) res=-1;

	cout<<res<<endl;

	return 0;
}
