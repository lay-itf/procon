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

int gcd(int x,int y)
{
	if(y==0) return x;
	else return gcd(y,x%y);
}

int main()
{
	int x,y;
	unsigned long long a,b;

	cin>>x>>y>>a>>b;

	cout<<b/(x*y/gcd(x,y))-(a-1)/(x*y/gcd(x,y))<<endl;


	return 0;

}

