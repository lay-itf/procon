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
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		string s; int count=0;
		bool f[13]={0};


		cin>>s;
		for(int b=1;b<=12;b++){
			if(12%b!=0) continue;

			for(int j=0;j<b;j++){
				string ss;
				for(int k=j;k<12;k+=b) ss+=s[k];
				if(ss.find("O")==string::npos){count++; f[b]=true; break;}
			}

		}

		cout<<count;
		for(int j=12;j>0;j--){
			if(f[j]) cout<<" "<<12/j<<"x"<<j;
		}
		cout<<endl;

	}

	return 0;
}
