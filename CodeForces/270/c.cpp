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
#include <map>

using namespace std;

int main()
{	

	int n;
	cin>>n;

	vector<string> f(n),s(n),f2(n),s2(n);
	for(int i=0;i<n;i++){
		cin>>f[i]>>s[i];
	}


	for(int i=0;i<n;i++){
		int p;
		cin>>p;
		f2[i]=f[p-1];
		s2[i]=s[p-1];
//		cout<<f2[i]<<" "<<s2[i]<<endl;
	}

	string last=min(f2[0],s2[0]);
	for(int i=1;i<n;i++){

//		cout<<last<<endl;

		if(min(f2[i],s2[i])>last) last=min(f2[i],s2[i]);
		else if(max(f2[i],s2[i])>last) last=max(f2[i],s2[i]);
		else{cout<<"NO"<<endl; return 0;}
	}

	cout<<"YES"<<endl;
	return 0;
}
