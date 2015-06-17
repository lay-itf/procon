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



int main()
{
	int n,a[200],num[100]={0},p[100]={0},res[200]={0},odd=0,eve=0;
	int m[10000]={0};

	cin>>n;
	for(int i=0;i<2*n;++i){
		cin>>a[i];
		num[a[i]]++;
	}

	for(int i=0;i<2*n;++i){
		if(num[a[i]]>=2){
			if(p[a[i]]!=1){ p[a[i]]=res[i]=1; eve++;}
			else {p[a[i]]=res[i]=2; odd++;}
		}
	}

	for(int i=0;i<2*n;++i){
		if(num[a[i]]<2){
			if(odd>eve){res[i]=2; eve++;}
			else {res[i]=1; odd++;}
		}
	}

	int max=0;
	for(int i=0;i<2*n;++i){
		if(res[i]==1){
			for(int j=0;j<2*n;++j){
				if(res[j]==2 && m[a[i]*100+a[j]]==0){cout<<a[i]*100+a[j]<<endl; m[a[i]*100+a[j]]++; max++;}
			}
		}
	}

	cout<<max<<endl;
	for(int i=0;i<2*n;++i){
		cout<<res[i]<<" ";
	}

	cout<<endl;

	return 0;

}

