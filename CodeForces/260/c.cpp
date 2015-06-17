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

int num[10010];

int main()
{

	int n;
	cin>>n;

	unsigned long long count=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(num[a]==0) count++;
		num[a]++;
	}

	unsigned long long res=0;

	while(count!=0){
		int k;

		for(int i=1;i<=n;i++){
			if(num[i]!=0){k=i;break;}
		}

		for(int i=k+1;i<=n;i++){
			int tmp=i*num[i]-(i-1)*num[i-1]-(i+1)*num[i+1];
			if(tmp>=k*num[k]-(k-1)*num[k-1]-(k+1)*num[k+1]) k=i;
		}

//		cout<<"#"<<k<<endl;

		res+=k*num[k];
		num[k]=0; count--;
		if(num[k-1]!=0){num[k-1]=0; count--;}
		if(num[k+1]!=0){num[k+1]=0; count--;}
	}

	cout<<res<<endl;

	return 0;
}
