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
	vector<int> k(n);
	for(int i=0;i<n;i++) cin>>k[i];

	int res=0;
	for(int i=0;i<k[0];i++){
		int tmp;
		cin>>tmp;
		res+=tmp*5;
	}
	res+=15*k[0];

//	cout<<"res="<<res<<endl;

	for(int i=1;i<n;i++){
		int res2=0;
		for(int j=0;j<k[i];j++){
			int tmp;
			cin>>tmp;
			res2+=tmp*5;
		}
		res2+=15*k[i];
//		cout<<"res2="<<res2<<endl;

		res=min(res,res2);
	}

	cout<<res<<endl;
	return 0;
}
