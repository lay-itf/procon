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
#include <complex>

using namespace std;

int Round(double x){
	if(x>=0) return (int)(x+0.5);
	else return (int)(x-0.5);
}

int main()
{
	double a,b;
	cin>>a>>b;

	complex<double> L1(a,0);
	complex<double> L2(0,b);

	for(int i=1;i<a;i++){
		double theta=asin(i/a);

		stringstream ss;

		complex<double> p1=L1*polar(1.0,theta);
		complex<double> p2=L2*polar(1.0,theta);

		double x1,x2,y1,y2;
		x1=p1.real(); x2=p2.real();
		y1=p1.imag(); y2=p2.imag();

		int rx1,rx2,ry1,ry2;

		rx1=Round(x1);
		rx2=Round(x2);
		ry1=Round(y1);
		ry2=Round(y2);

//		printf("(%f, %f)->(%d, %d)\n",x1,y1,rx1,ry1);
//		printf("(%f, %f)->(%d, %d)\n\n",x2,y2,rx2,ry2);

		if(x1==rx1 && x2==rx2 && y1==ry1 && y2==ry2 && rx1!=rx2 && ry1!=ry2){
			cout<<"YES"<<endl<<"0 0"<<endl;
			cout<<rx1<<" "<<ry1<<endl;
			cout<<rx2<<" "<<ry2<<endl;
			return 0;
		}

	}

	cout<<"NO"<<endl;
	return 0;
}
