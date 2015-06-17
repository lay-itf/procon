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
	string a;
	int k;

	cin>>a>>k;

	for(int i=0;i<a.size() && k>0;i++){
		int pos=i;
		for(int j=i+1;j<a.size() && j<i+k+1;j++){
			if(a[pos]<a[j]) pos=j;
		}

			k-=(pos-i);

			for(int j=pos;j!=i;j--){
				int tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
			}


	}

	cout<<a<<endl;

	return 0;
}
