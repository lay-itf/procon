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
	int n;
	cin>>n;


	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;


		if(a!=b){cout<<"Happy Alex"<<endl; return 0;}
	}

	cout<<"Poor Alex"<<endl;

	return 0;
}
