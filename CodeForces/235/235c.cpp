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
	long long zero,one;
	cin>>zero>>one;

	long long a,b;
	if(one-zero>=0 && 2*zero-one>=0){
		a=2*zero-one; b=one-zero;

//		cout<<"case1"<<endl;

		for(long long i=0;i<a;i++) cout<<0<<1;
		for(long long i=0;i<b;i++) cout<<0<<11;
		cout<<endl;
	}
	else if(one-zero+1>=0 && 2*zero-one-2>=0){
		a=2*zero-one-2; b=one-zero+1;

//		cout<<"case2"<<endl;

		for(long long i=0;i<a;i++) cout<<0<<1;
		for(long long i=0;i<b;i++) cout<<0<<11;
		cout<<0<<endl;
	}
	else if(one-zero-1>=0 && 2*zero-one+2>=0){
		a=2*zero-one+2; b=one-zero-1;

//		cout<<"case3"<<endl;

/*
’ñoŽž(AC)
		if(a>zero){
			for(long long i=0;i<a-1;i++) cout<<1<<0;
			for(long long i=0;i<b;i++) cout<<11<<0;
			cout<<1<<endl;
		}else{
			for(long long i=0;i<a;i++) cout<<1<<0;
			for(long long i=0;i<b-1;i++) cout<<11<<0;
			cout<<11<<endl;
		}
*/

		for(long long i=0;i<a-1;i++) cout<<1<<0;
		for(long long i=0;i<b-1;i++) cout<<11<<0;

		if(a==0) cout<<11<<endl;
		else if(b==0) cout<<1<<endl;
		else cout<<1101<<endl;

	}
	else{
		cout<<-1<<endl; return 0;
	}
	return 0;
}
