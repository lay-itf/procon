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

	vector<string> vs;
	for(int i=0;i<=n/2;i++){
		string s;
		for(int j=0;j<n;j++){
			if(n/2-i<=j && j<=n/2+i) s+="D";
			else s+="*";
		}
		cout<<s<<endl;
		vs.push_back(s);
	}

	for(int i=vs.size()-2;i>=0;i--) cout<<vs[i]<<endl;


	return 0;
}
