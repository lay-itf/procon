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
	int n;
	cin>>n;
	vector<int> a(n);

	bool f=true;
	int pos;

	cin>>a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]){pos=i; f=false; break;}
	}

	if(f){cout<<0<<endl; return 0;}

	for(int i=pos+1;i<n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]){cout<<-1<<endl; return 0;}
	}

	if(a[0]>=a[n-1]){cout<<n-pos<<endl;}
	else cout<<-1<<endl;

	return 0;
}
