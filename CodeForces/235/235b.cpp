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
	int x,k;
	cin>>x>>k;

	int min[5000],max[5000];

	min[x]=max[x]=2;
	for(int i=x-1;i>=0;i-=2){ min[i]=1; min[i-1]=-1;}
	for(int i=1;i<x;i++){max[i]=-1;}

	min[1]=max[1]=-1;

	for(int i=0;i<k;i++){
		int num;
		cin>>num;
		if(num==1){
			int d2,d1;
			cin>>d2>>d1;
			min[d2]=max[d2]=2;
			min[d1]=max[d1]=1;
		}else{
			int d2;
			cin>>d2;
			min[d2]=2;
			max[d2]=2;
		}
	}

	int count=0;
	for(int i=1;i<=x;i++){ if(min[i]==-1) count++;}
	cout<<count<<" ";

	count=0;
	for(int i=1;i<=x;i++){ if(max[i]==-1) count++;}
	cout<<count<<endl;


	return 0;
}
