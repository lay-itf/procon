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
	int k,d;

	cin>>k>>d;

	if(k>1 && d==0){ cout<<"No solution"<<endl; return 0;}

	int dr=0;
	for(int i=1;i<k;++i){
		cout<<i%10;
		dr+=(i%10);
		if(dr>9) dr=dr/10+dr%10;
	}

//	cout<<"dr="<<dr<<endl;

	int dr2;
	for(int i=0;i<10;++i){
		dr2=dr+i;
		if(dr2>9) dr2=dr2/10+dr2%10;
		if(dr2==d){ cout<<i<<endl; break;}
	}

//	cout<<"dr2="<<dr2<<endl;

	return 0;

}
