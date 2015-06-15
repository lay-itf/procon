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
	int n,tmp,a,b,c,d;
	vector<int> x,y;
	double d1,d2,d3,d_tmp,theta;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp; x.push_back(tmp);
		cin>>tmp; y.push_back(tmp);
	}

	d1=-1.0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(d1*d1< (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])){
				d1=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
				a=i; b=j;
			}
		}
	}

	d2=d3=-1.0;
	for(int i=0;i<n;i++){
		theta=acos( ((x[b]-x[a])*(x[i]-x[a])+(y[b]-y[a])*(y[i]-y[a]))/
						sqrt((x[b]-x[a])*(x[b]-x[a])+(y[b]-y[a])*(y[b]-y[a]))/
						sqrt((x[i]-x[a])*(x[i]-x[a])+(y[i]-y[a])*(y[i]-y[a])));

		d_tmp=sqrt( (x[i]-x[a])*(x[i]-x[a])+(y[i]-y[a])*(y[i]-y[a]) )*sin(theta);

		if((x[b]-x[a])*(y[i]-y[a])-(y[b]-y[a])*(x[i]-x[a])>0.0)
			d2=max(d2,abs(d_tmp));
		else
			d3=max(d3,abs(d_tmp));
		


	}

	cout<<d1*(d2+d3)/2.0<<endl;

	return 0;

}

