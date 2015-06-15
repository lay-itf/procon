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

int check(vector<unsigned long long> &a,int l,int r){
/*
	for(int i=l;i<=r;i++){
		cout<<a[i];
	}
	cout<<endl;
*/
	int res=1;
	for(int i=l+1;i<=r;i++){
		 if(a[i-1]>= a[i]){
		//	cout<<"res:"<<res<<endl; 
			return res;
		}
		res++;
	}

	//cout<<"res:"<<res<<endl;
	return res;
}

int main()
{
	int n;
	cin>>n;

	vector<unsigned long long> a(n);
	vector<int> down;
	cin>>a[0];
	for(int i=1;i<n;i++){ cin>>a[i]; if(a[i-1]>=a[i]) down.push_back(i);}


	int res=1;
	for(int i=0;i<down.size();i++){
		int tmp=a[down[i]];
		a[down[i]]=a[down[i]-1]+1;

		if(i==0) res=max(res,check(a, 0 , down[i+1]-1 ));
		else if(i!=down.size()-1) res=max(res,check(a, down[i-1] , down[i+1]-1 ));
		else res=max(res,check(a, down[i-1] , n-1 ));

		a[down[i]]=tmp;
	}

	cout<<res<<endl;

	return 0;
}
