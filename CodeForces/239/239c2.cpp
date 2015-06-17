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

bool check(complex<int> &p1, complex<int> &p2){

	if(p1.real()==p2.real() || p1.imag()==p2.imag()) return false;

	int L1=p1.real()*p1.real()+p1.imag()*p1.imag();
	int L2=p2.real()*p2.real()+p2.imag()*p2.imag();
	int L3=(p1.real()-p2.real())*(p1.real()-p2.real())+
		(p1.imag()-p2.imag())*(p1.imag()-p2.imag());

	if(L1+L2==L3) return true;
	return false;
}

int main()
{
	int a,b;
	cin>>a>>b;

	vector< complex<int> > p1,p2;

	for(int x=1;x<=a;x++){
		for(int y=1;y<=a;y++){
			if(x*x+y*y==a*a){
				p1.push_back(complex<int>(x,y));
			}
		}
	}

	for(int x=-1;x>=-b;x--){
		for(int y=1;y<=b;y++){
			if(x*x+y*y==b*b){
				p2.push_back(complex<int>(x,y));
			}
		}
	}

	for(int i=0;i<p1.size();i++){
		for(int j=0;j<p2.size();j++){
			if(check(p1[i],p2[j])){
				cout<<"YES"<<endl<<"0 0"<<endl;
				cout<<p1[i].real()<<" "<<p1[i].imag()<<endl;
				cout<<p2[j].real()<<" "<<p2[j].imag()<<endl;
				return 0;
			}
		}
	}

	cout<<"NO"<<endl;
	return 0;
}
