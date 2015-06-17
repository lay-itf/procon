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
	int p,n;
	cin>>p>>n;

	bool b[1000]={false};

	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(b[a%p]==true) {cout<<i+1<<endl; return 0;}
		b[a%p]=true;
	}

	cout<<-1<<endl;

	return 0;
}
