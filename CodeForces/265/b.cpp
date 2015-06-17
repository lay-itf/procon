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
	for(int i=0;i<n;i++) cin>>a[i];

	int pos=n,res=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){pos=i;break;}
	}

	for(int i=pos;i<n;){
		if(a[i]==1){
			res++;
			pos=i; i++;
			for(;i<n;i++){
				if(a[i]==1) break;
			}
			if(pos+1!=i && i!=n){
				res++;
			}
		}
	}

	cout<<res<<endl;

	return 0;
}
