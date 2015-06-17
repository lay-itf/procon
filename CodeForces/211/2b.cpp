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

typedef unsigned long long ull;

int main()
{
	ull n,k;
	cin>>n>>k;
	
	vector<ull> h(n),sum(n);

	cin>>h[0]; sum[0]=h[0];
	for(ull i=1;i<n;i++){
		cin>>h[i];
		sum[i]=sum[i-1]+h[i];
	}

	ull ans=1,sum_ans=sum[k-1];

	if(k==1){
		for(int i=1;i<n;i++){
			if(h[ans-1]>h[i]) ans=i+1;
		}
		cout<<ans<<endl;
		return 0;
	}

//	cout<<1<<"-"<<k<<" "<<sum[k-1]<<endl;

	for(ull i=1;k-1+i<n;i++){

//		cout<< i+1 <<"-"<<k+i<<" "<<sum[k-1+i]-sum[i-1]<<" ans "<<sum_ans<<endl;

		if(sum_ans>sum[k-1+i]-sum[i-1]){
			 ans=i+1;
			sum_ans=sum[k-1+i]-sum[i-1];
		}
//		if(h_sum>sum[i]-sum[i-k]) ans=i-1;
//		h_sum=min(h_sum,sum[i]-sum[i-k]);
	}

	cout<<ans<<endl;

	return 0;

}
