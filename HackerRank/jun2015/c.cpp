//101 Hack Jun 2015,Sherlock and Weird Sum,50pt,時間外AC

//N,M<=10^6が与えられ，1<=A<=N,1<=B<=Mで繰り上がりを無視する足し算(Weird Sum)をする．
//Weird Sumの最大値を出力する．

//貪欲に上位桁から各桁を計算するだけ

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
#include <sstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

typedef unsigned long long ULL;


int main()
{
	
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		ULL x,y;
		cin>>x>>y;
		
		if(x<y) swap(x,y);		

		string a;
		while(x){a=(char)('0'+x%10)+a; x/=10;}

		string b;
		while(y){b=(char)('0'+y%10)+b; y/=10;}
		while(b.size()!=a.size()) b='0'+b;

		//cout<<a<<" "<<b<<endl;
		
		int i=0;
		while(b[i]=='0') cout<<a[i++];
		
		bool ok=false;
		for(;i<a.size();i++){
			int x=a[i]-'0',y=b[i]-'0';
			if(ok) y=9;
			while(x+y>=10){ y--; ok=true;}
			cout<<x+y;
		} 
		cout<<endl;

	}

	return 0;
}