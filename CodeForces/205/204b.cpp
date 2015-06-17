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
	int n,tmp,f=0,z=0;
	string s;

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>tmp;
		if(tmp==0) z++;
		else f++;
	}
	
	if(z==0) s="-1";
	else{
		for(int i=0;i<f/9;++i) s+="555555555";
		if(f/9==0) s="0";
		else for(int i=0;i<z;++i) s+="0";
	}

	cout<<s<<endl;

	return 0;

}

